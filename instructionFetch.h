#pragma once
using namespace std;
#include <cstdint>

void PC_adder(uint32_t *inst);
uint32_t mem(uint32_t instructionMem[], uint32_t currentInst);
void IFID(uint32_t* addr, uint32_t* inst);
