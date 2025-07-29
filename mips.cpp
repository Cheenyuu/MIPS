#include <iostream>
#include "instructionFetch.h"
using namespace std;

uint32_t ARR[] = {1,2,3,4,5};
//for now there are representations of instructions, just to test if the code is working correctly

void run(){
    /*uint32_t PC_adder(uint32_t inst);
    uint32_t mem(uint32_t instructionMem[], uint32_t currentInst);
    void IFID(uint32_t* addr, uint32_t* inst);*/

    uint32_t instruction = NULL;
    uint32_t currentAddress = 0x0;

    cout<<currentAddress<<endl;
    PC_adder(&currentAddress);
    cout<<currentAddress<<endl;

    /*bool running = true;
    while(running){
        instruction = mem(ARR, currentAddress);
        IFID(&currentAddress, &instruction);

        PC_adder(&currentAddress);
    }*/

}


int main(){
    run();

}