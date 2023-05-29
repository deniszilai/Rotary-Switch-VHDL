library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
library UNISIM;
use UNISIM.VComponents.all;


entity demo_leduri is
	Port (	rotary_a : in std_logic;
				rotary_b : in std_logic;
				rotary_press : in std_logic;
				clk : in std_logic;
				led : out std_logic_vector(7 downto 0);
				rst    : in   STD_LOGIC;
				SF_D   : out  STD_LOGIC_VECTOR (3 downto 0);
				SF_CE0 : out  STD_LOGIC;
				LCD_E  : out  STD_LOGIC;
				LCD_RS : out  STD_LOGIC;
				LCD_RW : out  STD_LOGIC);
	end demo_leduri;


architecture Behavioral of demo_leduri is

	signal rotary_a_in : std_logic;
	signal rotary_b_in : std_logic;
	signal rotary_press_in : std_logic;
	signal rotary_in : std_logic_vector(1 downto 0);
	signal rotary_q1 : std_logic;
	signal rotary_q2 : std_logic;
	signal delay_rotary_q1 : std_logic;
	signal rotary_event : std_logic;
	signal rotary_left : std_logic;

	signal led_pattern : std_logic_vector(7 downto 0):= "10000000"; 
	signal led_drive : std_logic_vector(7 downto 0);
	
	signal lcd : std_logic_vector (63 downto 0);
	
	--signal lcd_delay : std_logic_vector (11 downto 0);
	
	component lcd_ctrl is
    Port ( clk    : in   STD_LOGIC;
           rst    : in   STD_LOGIC;
           lcd    : in   STD_LOGIC_VECTOR (63 downto 0);
           SF_D   : out  STD_LOGIC_VECTOR (3 downto 0);
			  SF_CE0 : out  STD_LOGIC;
           LCD_E  : out  STD_LOGIC;
           LCD_RS : out  STD_LOGIC;
           LCD_RW : out  STD_LOGIC);
	end component lcd_ctrl;

begin

	lcd_ctrl_i: lcd_ctrl port map (clk => clk,
                                  rst => rst,
                                  lcd => lcd,
                                  SF_D => SF_D,
                                  SF_CE0 => SF_CE0,
                                  LCD_E => LCD_E,
                                  LCD_RS => LCD_RS,
                                  LCD_RW => LCD_RW);

	rotary_filter: process(clk)
	begin
		if clk'event and clk='1' then
			rotary_a_in <= rotary_a;
			rotary_b_in <= rotary_b;
			rotary_press_in <= rotary_press;
			rotary_in <= rotary_b_in & rotary_a_in;

			case rotary_in is

				when "00" =>	rotary_q1 <= '0';         
									rotary_q2 <= rotary_q2;

				when "01" => 	rotary_q1 <= rotary_q1;
									rotary_q2 <= '0';

				when "10" => 	rotary_q1 <= rotary_q1;
									rotary_q2 <= '1';

				when "11" => 	rotary_q1 <= '1';
									rotary_q2 <= rotary_q2; 

				when others => rotary_q1 <= rotary_q1; 
									rotary_q2 <= rotary_q2; 
			end case;
		end if;
	end process rotary_filter;


	direction: process(clk)
	begin
		if clk'event and clk='1' then
			delay_rotary_q1 <= rotary_q1;
			if rotary_q1='1' and delay_rotary_q1='0' then
				rotary_event <= '1';
				rotary_left <= rotary_q2;
			else
				rotary_event <= '0';
				rotary_left <= rotary_left;
			end if;
		end if;
	end process direction;

	led_display: process(clk)
	begin
		if clk'event and clk='1' then
			if rotary_event='1' then
				if rotary_left='1' then 
					led_pattern <= led_pattern(6 downto 0) & led_pattern(7); 
				else
					led_pattern <= led_pattern(0) & led_pattern(7 downto 1); 
				end if;
			end if;
			
			if rotary_press_in='0' then
				led_drive <= led_pattern; 
			else
				led_drive <= led_pattern xor "11111111";  
				lcd <= x"4F" & x"4E" & x"80" & x"80" & x"80" & x"80" & x"80" & x"80";
			end if;

			led <= led_drive; 
			
		end if;
	end process led_display;

end Behavioral;
