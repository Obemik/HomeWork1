#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "To be ";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "or not ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "to be: that is the question:\nWhether ";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "'tis nobler in the mind to suffer\n"
        << "The slings and arrows of outrageous fortune,\n"
        << "Or to take arms against a sea of troubles,\n"
        << "And by opposing end them?\n";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "William Shakespeare" << endl;
    SetConsoleTextAttribute(hConsole, 7);
	return 0;
}