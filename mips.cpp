#include <iostream>
#include "instructionFetch.h"
#include "regfile.h"
using namespace std;

//for now there are representations of instructions, just to test if the code is working correctly
uint32_t ARR[] = {
    0b00000000001000100010000000100000,
};

//we will simulate 10 registers
uint32_t reg[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}; //0-9 reg

void run(){
    /*uint32_t PC_adder(uint32_t inst);
    uint32_t mem(uint32_t instructionMem[], uint32_t currentInst);
    void IFID(uint32_t* addr, uint32_t* inst);
    void setInstruction(uint32_t* instruction);
    void decode();
    uint32_t sign_ex(uint16_t imm);
    uint32_t extract(uint32_t val, int begin, int end);
    void IDEX(uint32_t *operation, uint32_t *rs_val, uint32_t *rt_val, uint32_t *rd_val, uint32_t *shamt_r, uint32_t *funct_r);*/

    uint32_t instruction = 0x0;
    uint32_t currentAddress = 0x0;

    uint32_t op, rs, rt, rd, shamt, funct;

    bool running = true;
    while(running){
        if(currentAddress > 5){
            running = false;
            break;
        }
        instruction = mem(ARR, currentAddress);
        cout<<instruction<<endl;
        setInstruction(&instruction);
        decode();
        IFID(&currentAddress, &instruction);
        IDEX(&op, &rs, &rt, &rd, &shamt, &funct);
        PC_adder(&currentAddress);        
    }

}



int main(){
    run();
}