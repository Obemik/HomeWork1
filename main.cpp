#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "\"Hello, World!\"" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "/Bjarne Stroustrup/" << endl;
	return 0;
}