#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	const int arr_colm = 5;
	const int arr_row = 5;
	const int arr_row_1 = 10;
	int arr_1[arr_colm][arr_row_1];
	int arr_2[arr_colm][arr_row];
	for (int i = 0; i < arr_colm; i++)
	{
		for (int j = 0; j < arr_row_1; j++)
		{
			arr_1[i][j] = rand() % 50;
			cout << arr_1[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < arr_colm; i++)
	{
		for (int j = 0, k = 0; j < arr_row_1; j+=2, k++)
		{
			arr_2[i][k] = arr_1[i][j] + arr_1[i][j + 1];
		}
	}
	for (int i = 0; i < arr_colm; i++)
	{
		for (int j = 0; j < arr_row; j++)
		{
			cout << arr_2[j][i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}