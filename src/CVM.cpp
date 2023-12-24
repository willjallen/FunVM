#include <algorithm>
#include "CVM.h"


CVM::CVM(size_t MEMORY_SIZE) : MEMORY_SIZE(MEMORY_SIZE){


}

int CVM::init(){
	/* Initialize the VM */

	/* Initialize memory and registers */
	memory = std::make_unique<uint16_t[]>(MEMORY_SIZE);
	std::fill(memory.get(), memory.get() + MEMORY_SIZE, 0);
	
	REG_A = std::make_unique<uint16_t>(0);
	REG_B = std::make_unique<uint16_t>(0);
	REG_C = std::make_unique<uint16_t>(0);
	REG_PC = std::make_unique<uint16_t>(0);

	return 1;
}