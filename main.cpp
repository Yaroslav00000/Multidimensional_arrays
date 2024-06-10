#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	const int colm = 100;
	const int row = 100;
	int arr[colm][row];
	int current_colm = 0, current_row = 0;
	do {
		cout << "Enter the number of columns: ";
		cin >> current_colm;
		cout << "Enter the number of rows: ";
		cin >> current_row;
	} while (current_colm < 1 || current_colm > colm || current_row < 1 || current_row > row);
	for (int i = 0; i < current_colm; i++) {
		for (int j = 0; j < current_row; j++) {
			arr[i][j] = rand() % 10;
		}
	}
	int sum_row = 0, sum_colm = 0;
	for (int i = 0; i < current_colm; i++) {
		for (int j = 0; j < current_row; j++) {
			cout << " " << arr[i][j] << " ";
			
		}
		cout << "| ";
		sum_row = 0;
		for (int j = 0; j < current_row; j++) {
			sum_row += arr[i][j];
		}
		cout << sum_row;
		cout << endl;
	}
	for (int i = 0; i < current_row+5; i++) {
		cout << " -";
	}
	cout << endl;
	for (int j = 0; j < current_row; j++) {
		sum_colm = 0;
		for (int i = 0; i < current_colm; i++) {
			sum_colm += arr[i][j];
			
		}
		cout << " ";
		cout <<  sum_colm;
	}
	int total_sum = 0;
	for (int i = 0; i < current_colm; i++) {
		for (int j = 0; j < current_row; j++) {
			total_sum += arr[i][j];
		}
	}
	cout << " | " << total_sum;
	return 0;
}