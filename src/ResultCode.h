#ifndef RESULT_CODE_H
#define RESULT_CODE_H

#include <string>


struct RESULT {
	RESULT(int value, std::string name) : value(value), name(name) {}
	int value;
	std::string name;

	bool operator==(const RESULT& other){
		return this->value == other.value;
	}

	bool operator!=(const RESULT& other){
		return this->value != other.value;
	}

};



namespace RESULT_CODE{
	const RESULT UNSPECIFIED_FAILURE = RESULT(0, "UNSPECIFIED_FAILURE");
	const RESULT SUCCESS = RESULT(1, "SUCCESS");
	const RESULT OUT_OF_MEMORY = RESULT(2, "OUT_OF_MEMORY");
	const RESULT CLI_ERROR = RESULT(3, "CLI_ERROR");
	const RESULT FILE_NOT_FOUND = RESULT(4, "FILE_NOT_FOUND");
	const RESULT INCORRECT_NUM_ARGS = RESULT(5, "INCORRECT_NUM_ARGS");
	const RESULT UNIMPLEMENTED_INSTRUCTION = RESULT(6, "UNIMPLEMENTED_INSTRUCTION");
	const RESULT BAD_OFFSET = RESULT(7, "BAD_OFFSET");

}

#endif
