#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
	string user_input;
	bool running = true;
	cout << "welcome, you can use any basic operation, type 'exit' to quit" << endl;
	while(running) {
		//Delete this once functions are more fleshed out, this is an outline on how functions will be called. Subject to change
		cout << "Enter: ";
		cin >> user_input;
		Calculator calculator{user_input};
		if(calculator.isRunning == true) { //isRunning() returns bool false if user_input is 'exit'
			Calculator calculator{user_input};
			calculator.readInput(); // Using the user_input for the constructor, the calculator then reads the user input separating the
						// numbers from the operations
			cout << calculator.operate() << endl;   // Then after the input is read, the correct operations will be done
		}
		else {
			running = calculator.isRunning();
		}
	}	
	cout << "You have closed the calculator" << endl;
	
	return 0;
}
