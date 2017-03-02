/***********************************************
Name: Cole McKnight, Robert Morrow
File: sim.c
Description: simulates a basic CPU.
Date: 3/7/17
***********************************************/
#include <stdio.h> 

int main() 
{
    int pc = 0;
    unsigned int word, opcode, addr;
    if(scanf("%x", &word) != -1) pc++;
    while(word != -1)
    {
        pc++;                          //incr pc 
        opcode = word >> 9;            //calc opcode

        unsigned int mask = 0x1FF;     
        addr = word & mask;            //calc addr

        printf("\n %x = %d -> %d", word, opcode, addr); 

        scanf("%x", &word);            //read next inst
    }
    printf("\n HALT\nInstructions:  %d \n", pc);
    return 0;
}

/*psuedocode
while(!halt)
{
    CSIR = CS[CSAR];
    
    if(CSIR[PC_INCR])
        PC++;
    if(CSIR[MAR_IN])
        MAR = BUS;
    if(CSIR[PC_OUT])
        BUS = PC;
}

*/
