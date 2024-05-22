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
	for (int i = 0; i < current_colm; i++) {
		for (int j = 0; j < current_row; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int sum = 0;
	for (int i = 0; i < current_colm; i++) {
		for (int j = 0; j < current_row; j++) {
			sum += arr[i][j];
		
		}
	}
	cout << "Sum: " << sum << endl;
	double avarence = sum / (current_colm * current_row);
	cout << "Avarence: " << avarence << endl;
	int min = arr[0][0];
	for (int i = 0; i < current_colm; i++) {
		for (int j = 0; j < current_row; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
	}
	cout << "Min: " << min << endl;
	int max = arr[0][0];
	for (int i = 0; i < current_colm; i++) {
		for (int j = 0; j < current_row; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	cout << "Max: " << max << endl;
	return 0;
}