#include<iostream>
using namespace std;

//#define MULTIPLICATION_TABLE
//#define PYTHAGORAS_TABLE
//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define PLUS_MINUS


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10) cout << " ";
			cout << i << " * ";
			if (j < 10) cout << " ";
			cout << j << " = ";
			if (i*j < 100) cout << " ";
			if (i * j < 10) cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
}

#endif // MULTIPLICATION_TABLE

#ifdef PYTHAGORAS_TABLE
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(3);
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif // PYTHAGORAS_TABLE

#ifdef SQUARE
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++) // Повторяет вывод строки на экран
	{
		for (int i = 0; i < n; i++) // Повторяет вывод звездочки на экран
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // SQUARE

#ifdef TRIANGLE_1
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++) // Повторяет вывод строки на экран
	{
		for (int j = 0; j <= i; j++) // Повторяет вывод звездочки на экран
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2

	int n;
    cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++) // Повторяет вывод строки на экран
	{
		for (int j = i; j < n; j++) // Повторяет вывод звездочки на экран
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif //TRIANGLE_2


#ifdef TRIANGLE_3
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++) // Повторяет вывод строки на экран
	{
		for (int j = 0; j < i; j++) // Повторяет вывод звездочки на экран
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}


#endif // TRIANGLE_3

#ifdef TRIANGLE_4

	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++) // Повторяет вывод строки на экран
	{
		for (int j = i; j < n; j++) // Повторяет вывод звездочки на экран
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif //TRIANGLE_4

#ifdef PLUS_MINUS
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0) cout << "+ ";
			else cout << "- ";
		}
		cout << endl;
	}

#endif // PLUS_MINUS


}

