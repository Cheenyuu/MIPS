#pragma once
using namespace std;
#include <cstdint>

void setInstruction(uint32_t* instruction);
void decode();
uint32_t sign_ex(uint16_t imm);
uint32_t extract(uint32_t val, int begin, int end);
void IDEX(uint32_t *operation, uint32_t *rs_val, uint32_t *rt_val, uint32_t *rd_val, uint32_t *shamt_r, uint32_t *funct_r);