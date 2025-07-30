#include <iostream>
#include "instructionFetch.h"
using namespace std;

//for now there are representations of instructions, just to test if the code is working correctly
uint32_t ARR[] = {
    0b00000000000000000000000000000000,
    0b00000000000000000000000000000001,
    0b00000000000000000000000000000010,
    0b00000000000000000000000000000100,
    0b00000000000000000000000000001000,
    0b00000000000000000000000000010000,
    
};

//we will simulate 10 registers
uint32_t reg[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}; //0-9 reg

void run(){
    /*uint32_t PC_adder(uint32_t inst);
    uint32_t mem(uint32_t instructionMem[], uint32_t currentInst);
    void IFID(uint32_t* addr, uint32_t* inst);*/

    uint32_t instruction = 0x0;
    uint32_t currentAddress = 0x0;


    bool running = true;
    while(running){
        if(currentAddress > 5){
            running = false;
            break;
        }
        instruction = mem(ARR, currentAddress);
        cout<<instruction<<endl;
        IFID(&currentAddress, &instruction);
        PC_adder(&currentAddress);
    }

}



int main(){
    run();
}