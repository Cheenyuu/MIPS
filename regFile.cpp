#include <iostream>
#include <cstdint>
#include "regfile.h"

using namespace std;

uint32_t seqPC, RS1, RS2, IMM;

uint32_t opcode, rs, rt, rd, shamt, funct, inst;

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
    bool i = false;
    bool j = false;
    opcode = extract(inst, 26, 32);
    if(opcode == 0x0){
        //rtype function
        cout<<"RTYPE"<<endl;
        funct = extract(inst, 0, 6);
        shamt = extract(inst, 6, 11);
        rd = extract(inst, 11, 16);
        rt = extract(inst, 16, 21);
        rs = extract(inst, 21, 26);
    }
    if(i){
        /*
        immediate = extract(inst, 0, 16);
        rt = extract(inst, 16, 21);
        rs = extract(inst, 21, 26);
        opcode = extract(inst, 26, 32);
        */
    }
    if(j){
        /*
        address = extract(inst, 0, 26);
        opcode = extract(inst, 26, 32);
        */
    }
}

//this is meant to change the size of a binary number...
uint32_t sign_ex(uint16_t imm){
    uint32_t imm_32 = (uint16_t) imm;
    return imm_32;
}

void IDEX(uint32_t *operation, uint32_t *rs_val, uint32_t *rt_val, uint32_t *rd_val, uint32_t *shamt_r, uint32_t *funct_r){
    *operation = opcode;
    *rs_val = rs;
    *rt_val = rt;
    *rd_val = rd;
    *shamt_r = shamt;
    *funct_r = funct;

    cout<<"opreation: "<<opcode<<" register 1: "<<rs<<" register 2: "<<rt<<" register destination: "<<rd<<" shamt: "<<shamt<<" funct: "<<funct<<endl;
}