
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY comutator_tb IS
END comutator_tb;
 
ARCHITECTURE behavior OF comutator_tb IS 
 
 
    COMPONENT demo_leduri
    PORT(
         rotary_a : IN  std_logic;
         rotary_b : IN  std_logic;
         rotary_press : IN  std_logic;
         clk : IN  std_logic;
         led : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rotary_a : std_logic := '0';
   signal rotary_b : std_logic := '0';
   signal rotary_press : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal led : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: demo_leduri PORT MAP (
          rotary_a => rotary_a,
          rotary_b => rotary_b,
          rotary_press => rotary_press,
          clk => clk,
          led => led
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
