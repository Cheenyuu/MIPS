#include <iostream>
#include <cstdint>
#include "regfile.h"

using namespace std;

uint32_t seqPC, RS1, RS2, IMM;

//we will simulate 10 registers...
uint32_t reg[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}; //0-9 reg

uint32_t opcode = 0b000000; //6
uint32_t rs = 0b00001; //5
uint32_t rt = 0b00010; //5
uint32_t rd = 0b00100; //5
uint32_t shamt = 00000; //5
uint32_t funct = 1000000; //6

uint32_t inst = (opcode << 26) | (rs << 21) | (rt << 16) | (rd << 11) | (shamt << 6) | (funct);

void setInstruction(uint32_t* instruction){
    inst = *instruction;
}


//https://stackoverflow.com/questions/10090326/how-to-extract-specific-bits-from-a-number-in-c
uint32_t extract(uint32_t val, int begin, int end){
    uint32_t mask = (1 << (end - begin)) - 1;
    //0b1000 - 1 = 0b111
    return (val >> begin) & mask;
}

void decode(){
    //R function...
    bool r = true;
    if(r){
        funct = extract(inst, 1, 6); 


    }
}

void sign_ex(uint32_t imm){

}

void IDEX(){

}