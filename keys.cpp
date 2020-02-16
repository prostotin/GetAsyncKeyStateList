// allKeys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <fstream>
int main()
{
	std::cout << "press keys(chars) to generate GetAsyncKeyState statements..." << std::endl;
	char c;
	std::ofstream myfile("GetAsyncKeyState.txt");
	
	for (;;) {	
		std::cin >> c;
		myfile << "else if (GetAsyncKeyState('" << char(toupper(c)) << "') & 0x8000) {} //if key " << c << " is pressed.\n" << std::endl;
		if (c == 'm') {
			return 0;
		}
	}
	myfile.close();
	return 0;
}

