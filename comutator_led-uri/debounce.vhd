
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity debounce is
    Port ( clk : in  STD_LOGIC;
           d_in : in  STD_LOGIC;
           q_out : out  STD_LOGIC);
end debounce;

architecture Behavioral of debounce is

signal Q1, Q2, Q3 : std_logic;

begin

process(clk)
begin
   if (clk'event and clk = '1') then
		Q1 <= D_IN;
      Q2 <= Q1;
      Q3 <= Q2;
   end if;
end process;
 
Q_OUT <= Q1 and Q2 and (not Q3);
 
				
end Behavioral;
