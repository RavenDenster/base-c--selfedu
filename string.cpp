#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "rus");

    // char a[100];
    // strcpy(a, "Привет"); // копировать
    // strcat(a, " мир"); // добавлять

    // int N = strlen(a);

    // cout << N << endl;

    ////////////////////////////////////////////////////

    // char a[100];
    // char b[20];

    // cin >> b;

    // strcpy_s(a, "Hello");

    // if (strcmp(a, b) == 0) cout << "Строки равны\n";
    // else cout << "Строки не равны\n";

    ////////////////////////////////////////////////////

    // char a[100];
    // char b[20];

    // gets(b); // для ввода длиных строк

    // strcpy_s(a, "Hello");

    // if (strcmp(a, b) == 0) cout << "Строки равны\n";
    // else cout << "Строки не равны\n";

    ////////////////////////////////////////////////////

    // char a[100] = "Привет ";
    // char b[20] = "мир";

    // puts(a);
    // puts(b);

    ////////////////////////////////////////////////////

    // int age = 20;
    // double weight = 70.5;
    // char name[100] = "Иван";
    // char str[200];

    // sprintf(str, "Здравствуйте %s! Ваш возраст %d лет, вес %.2f кг", name, age, weight);

    // cout << str << endl;

    ////////////////////////////////////////////////////

    char str_i[] = "120";
    char str_f[] = "120,50";

    int i = atoi(str_i);
    float f = atof(str_f);

    cout << i << " " << f << endl;

    return 0;
}