#include <iostream>
#include "..\BubbleSortLib\BubbleSortH.h"
#include <string>

using namespace std;
int main()
{
	int massa[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int size = sizeof(massa) / sizeof(massa[0]);

	bubble_sort(massa, size);

	for (int i = 0; i < size; i++) {
		cout << to_string(massa[i]) << endl;
	}

}