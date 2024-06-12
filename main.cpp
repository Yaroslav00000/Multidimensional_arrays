#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	cout << "¬вед≥ть розм≥р масиву: ";
	cin >> size;
	int arr[3][3];
	int num= 1;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			arr[i][j] = num;
			num*=2;
		}
	}
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	 
	return 0;
}