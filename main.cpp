#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
    const int row = 2;
    const int col = 6;
    int shift;
    char direction;
    int array[row][col];
    int temp[row][col];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            array[i][j] = rand() % 10; 
        }
    }
    cout << "Початковий масив:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Введіть кількість зсувів: ";
    cin >> shift;
    cout << "Введіть напрямок зсуву (L/R/U/D): ";
    cin >> direction;
    if (direction != 'L' && direction != 'R' && direction != 'U' && direction != 'D') {
       cout << "Неправильний напрямок зсуву!" << endl;       
    }
    if (direction == 'L') {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                    temp[i][j] = array[i][(j + shift) % col];
            }
        }
    }
    else if (direction == 'R') {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                temp[i][j] = array[i][(j - shift + col) % col]; 
            }
        }
    }
    else if (direction == 'D') {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                    temp[i][j] = array[(i + shift) % row][j];
            }
        }
    }
    else if (direction == 'U') {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                    temp[i][j] = array[(i - shift + row) % row][j];
            }
        }
    }
    cout << "\nМасив після зсуву:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            array[i][j] = temp[i][j];
        }
    }
    for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}

    