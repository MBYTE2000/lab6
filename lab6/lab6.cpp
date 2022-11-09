#include <iostream>
#include <random>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, max;
	cout << "введите n" << endl;
	cin >> n;

    int** arr = new int*[n]; // объявление указателя на массив указателей
    for (int i = 0; i < n; i++) 
    {
        arr[i] = new int[n]; // установка значения в указатель массива
    }

    //ручное заполнение массива
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "arr[" << i << "][" << j<< "]=";
            cin >> arr[i][j];
            cout << endl;
        }
    }

    //логика программыmax 
    max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            //if (i + j == n - 1) arr;
            //else if (i + j < n - 1) A[i][j] = 2;
            //else A[i][j] = 1;

            if (i + j > n-1)
            {
                if (arr[i][j]>max)
                {
                    max = arr[i][j];
                }
            }
        }
    }

    //вывод в консоль
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (i + j == n - 1) cout << " > " << arr[i][j] << " < ";
            else cout << " " << arr[i][j] << " ";
        cout << endl;
    }
    cout << "max = "  << max;


    return 0;
}	