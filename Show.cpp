#include "Show.h"
#include <iostream>
#include <string>

void Show::showGoals() {
	std::cout << "\n My Goals: \n";
	std::cout << "to be become an adept Unreal Engine user and C++ programmer\n";
}

void Show::showProgress() {
	std::cout << "So far I've only made what your currently looking at...\n";
	std::cout << "- Inputs and outputs\n";
	std::cout << "- Functions\n";
	std::cout << "- Variables and data types\n";
	std::cout << "- C++ syntax\n";
}

void Show::showDemo() {
	std::cout << "Here's a really simply math equation 2 * 5 - 4 = " << 2 * 5 - 4 << "\n";
} 