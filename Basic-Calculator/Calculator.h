#pragma once
#include <string>
#include <vector>

class Calculator {
	protected:
		std::string input;
	public:
		Calculator();
		Calculator(std::string f)
			: input{f}
		{
			//This space is intentionally left blank
		}
		const bool isRunning();
		const int operate();
		const std::vector<char> readOp();
		const std::vector<int> readNums();

};
