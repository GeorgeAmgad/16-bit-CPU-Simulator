# 16-bit-CPU-Simulator


-the processor makes two simultanious fetches for each instruction 
-one for the operation code and one for the operad
-so when writing on the memory each whole instruction takes two spaces 


for example:

	MOVE	D0 <- E4 ( move the number E4 (228 in decimal) to the cpu data registery)

is written as:

	memory[0] = 00000101  (move, mem to reg, literal)
	memory[1] = 11100100  ( E4 )


IMPORTANT: u must add the stop instruction (11111111) after the code so the CPU doesnt keep fetching garbage and crash

- to stop entering data in memory and see the results hit ctr+z then hit enter ;)

