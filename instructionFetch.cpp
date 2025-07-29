#include <iostream>
#include <cstdint>
#include "instructionFetch.h"


using namespace std;

uint32_t currentAddress = 0x0;
uint32_t currentInstruction = 0x0;
uint32_t static INSTRUCTIONSIZE = 4;

//There are four main components: PC adder, Address, Memory, IF/ID
//all instructions are stored in 32 bit words... different parts of the instruction are sent to different places...

void PC_adder(uint32_t *inst){
    currentAddress = *inst + INSTRUCTIONSIZE;
    *inst = *inst + INSTRUCTIONSIZE; 
}

uint32_t mem(uint32_t instructionMem[], uint32_t currentInst){
    //this attempts to access instruction memory...
    currentInstruction = instructionMem[currentInst];
    return instructionMem[currentInst];
}

//I need to get it to return both values...
void IFID(uint32_t* addr, uint32_t* inst){
    *addr = currentAddress;
    *inst = currentInstruction;
    return;
}