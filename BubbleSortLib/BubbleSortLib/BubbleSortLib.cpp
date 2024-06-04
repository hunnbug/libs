#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(int* mass, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (mass[j] > mass[j + 1]) {
				swap(mass[j], mass[j + 1]);
			}
		}
	}
}

void bubble_sort(vector<int> vec)
{
	for (int i = 0; i < vec.size() - 1; i++)
	{
		for (int j = 0; j < vec.size() - i - 1; j++)
		{
			if (vec[j] > vec[j + 1]) {
				swap(vec[j], vec[j + 1]);
			}
		}
	}
}
