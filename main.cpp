#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num;
	cout << "������ �����: ";
	cin >> num;
	int result = 1;
	int arr[2][3];
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			arr[i][j] = num;
			num*=2;
		}
	}
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	 
	return 0;
}