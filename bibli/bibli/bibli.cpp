#include <iostream>
#include <string>
#include "Windows.h"
#include "..\FindLettersInWord\Header.h"
using namespace std;

int main()
{
	HINSTANCE load;
	string strok;
	char letter;
	cout << "enter stroku: " << endl;
	cin >> strok;
	cout << "enter letter that you want to find in strok: " << endl;
	cin >> letter;


	load = LoadLibrary(L"FindLettersInWord.dll");
	typedef int (*sum) (char, string);
	sum FindLetters;

	FindLetters = (sum)GetProcAddress(load, "find_letters_in_word");

	FindLetters(letter, strok);
	FreeLibrary(load);

}