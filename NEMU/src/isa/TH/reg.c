#include <isa.h>
#include "local-include/reg.h"

const char *regsl[] = {
  "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7",
  "r8", "r9", "r10", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

#ifndef __ICS_EXPORT
void isa_reg_display() {
  int i;
  for (i = 0; i < 32; i ++) {
    printf("%s: 0x%08x ", regsl[i], cpu.gpr[i]._32);
    if (i % 4 == 3) printf("\n");
  }
  printf("pc: 0x%08x\n", cpu.pc);
}

word_t isa_reg_str2val(const char *s, bool *success) {
  int i;
  *success = true;
  for (i = 0; i < 32; i ++) {
    if (strcmp(regsl[i], s) == 0) return reg_l(i);
  }

  if (strcmp("pc", s) == 0) return cpu.pc;

  *success = false;
  return 0;
}