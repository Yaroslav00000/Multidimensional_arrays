#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int arr_1[5][10];
	for (int i = 0; i < arr_colm_1; i++)
	{
		for (int j = 0; j < arr_row_1; j++)
		{
			arr_1[i][j] = rand() % 50;
			cout << arr_1[i][j] << " ";
		}
		cout << endl;
	}
	const int arr_colm_2 = 5;
	const int arr_row_2 = 5;
	int arr_2[arr_colm_2][arr_row_2];
	int suma_two_numbers = 0;
	for (int i = 0; i < arr_colm_1; i++)
	{
		for (int j = 0; j < arr_row_1; j++)
		{
			if (i == j)
			{
				suma_two_numbers += arr_1[i][j];
			}
		}
	}

	return 0;
}