#include <iostream>
#include <string>

using namespace std;
__declspec(dllexport) bool find_letters_in_word(char letter, string word)
{
	int count = 0;
	for (int i = 0; i <= word.length(); i++)
	{
		if (word[i] == letter) {
			count++;
		}
	}
	if (count == 0)
	{
		cout << "bukvi net" << endl;
		return false;
	}
	else if (count > 0)
	{
		cout << "there is " + to_string(count) + " times letter " + letter + " was found in word " + word << endl;
		return true;
	}
}