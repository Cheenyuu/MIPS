#include <iostream>
#include "instructionFetch.h"
using namespace std;

uint32_t ARR[] = {1,2,3,4,5};
//for now there are representations of instructions, just to test if the code is working correctly

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