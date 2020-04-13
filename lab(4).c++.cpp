#include <iostream>
#include<string.h>
#include<conio.h>
#include <stdio.h>
#include <sstream> 
using namespace std;

void task1()
{
	char str[50], result[50];
	puts("Ввод строки не более 50 символов");
	fgets(str, 50, stdin);
	int i = 0, n = 0, a = 0;
	while (str[i])
	{
		if (str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?')
			n++;
		else
			result[a++] = str[i];
		i++;
	}
	result[a] = 0;
	printf("\nВведённых знаков пунктуации:%d\n", n);
	puts(result);
}

void task2()
{
	puts("Ввести строку не более 80 символов");
	char str[80];
	char token[80];
	fgets(str, 80, stdin);
	char* p = str;
	char* t = token;

	cout <<"Введеная строка: "<< str << endl;

	while (*p) {
		if (*p != str[0]) {
			*t = *p;
			++t;
		}
		++p;
	}
	*t = 0;

	cout <<"Полученная строка без первого символа: "<< token << endl;
}

void task3()
{
	char str[50];
	cout << "\nВведите строку: ";
	cin>>str;
	cout << "Перевернутая строка: " << strrev(str) << endl;
}

int main()
{
	setlocale(0, "");
	task1();
	task2();
	task3();
}
