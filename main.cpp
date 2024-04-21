#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    cout << "Every" << "\n";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\tHunter" << "\n";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "\t\tWants" << "\n";
    SetConsoleTextAttribute(hConsole, 2);
    cout << "\t\t\tTo know" << "\n";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "\t\t\t\t Where" << "\n";
    SetConsoleTextAttribute(hConsole, 9);
    cout << "\t\t\t\t\tDoes Pheasant" << "\n";
    SetConsoleTextAttribute(hConsole, 5);
    cout << "\t\t\t\t\t\t\tSit" << "\n\n" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    return 0;
}