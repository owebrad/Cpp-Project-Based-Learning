#include "Calculator.h"
#include <cctype>

const bool isRunning() {
	if(input == "exit") {
		return false;
	}
	return true;
}

const std::vector<char> readOp() {

}

const std::vector<int> readNums() {
	std::vector<int> nums;
	int currentNum = 0;
	bool isCraftingNum = false;
	for(char c : input) {
		if(std::isdigit(c)) {
			currentNum = currentNum * 10 + (c-10);
			isCraftingNum = true;
		}
		else if(isCraftingNumber) {
			nums.push_back
		}
	}
}

const string operate() {
	std::vector<int> nums = this.readNums();
	std::vector<char> ops = this.readOp();
	
}
