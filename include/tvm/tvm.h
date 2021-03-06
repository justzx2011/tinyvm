#ifndef TVM_H_
#define TVM_H_

#include <stddef.h>

#include "tvm_memory.h"
#include "tvm_program.h"
#include "tvm_stack.h"

typedef struct tvm_s
{
	tvm_program_t* pProgram;
	tvm_memory_t* pMemory;
} tvm_t;

tvm_t* tvm_create();
void tvm_destroy(tvm_t* vm);

int tvm_interpret(tvm_t* vm, char* filename);
void tvm_run(tvm_t* vm);
inline void tvm_step(tvm_t* vm, int* instr_idx);

#endif
