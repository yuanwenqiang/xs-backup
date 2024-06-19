#include "../local-include/rtl.h"
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include <isa-all-instr.h>


def_all_THelper();

// decode operand helper
#define def_DopHelper(name) \
  void concat(decode_op_, name) (Decode *s, Operand *op, uint32_t val, bool flag)

static inline def_DopHelper(i) {
  op->imm = val;
  print_Dop(op->str, OP_STR_SIZE, (flag ? "0x%x" : "%d"), op->imm);
}
