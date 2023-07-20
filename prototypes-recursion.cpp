#include <iostream>
using namespace std;

float perimetr(float a, float b) {
    float res = 2 * (a + b);
    return res;
}

void show_ar(int a[], int N) { // void функция которая ничего не возвращант
    for (int i = 0; i < N; ++i)
        cout << a[i] << " ";
}

float squr(float, float); // прототипы
void modul(short);

int module(int x) {
    if (x < 0) x = -x;
    return x;
}

double module(double x) { // перегрузка
    if (x < 0) x = -x;
    return x;
}

void up_and_down(int n) { // рекурсия
    cout << "Уровень вниз " << n << endl;
    if (n < 4) {
        up_and_down(n + 1);
    }
    cout << "Уровень вверх " << n << endl;
}

int f(int a[], int len) {
    if (len == 0) {
        return 0;
    }
    return f(a, len-1) + a[len-1];
}

int main() 
{
    setlocale(LC_ALL, "rus");

    // int w = 5;
    // float h = 3.4;

    // float p1 = perimetr(w, h);
    // float p2 = perimetr(5, 4);
    // cout << p1 << " " << p2 << endl;

    ////////////////////////////////////////////

    // int b[] = {4,3,2,-5,6,0};
    // int N = sizeof(b) / sizeof(int);

    // show_ar(b, N);

    ////////////////////////////////////////////

    // modul(-3);
    // float p = squr(2,3);
    // cout << p << endl;

    ////////////////////////////////////////////

    // int a1 = module(-3);
    // int a2 = module(-3.5);
    // double a3 = module(-3);
    // double a4 = module(-3.5);

    // cout << a1 << " " << a2 << " " << a3 << " " << a4 << endl;

    ////////////////////////////////////////////

    // up_and_down(1);

    // сумма эл. массива

    int mass[] = {1,2,3,4,5};
    int len_m = sizeof(mass)/sizeof(int);
    cout << f(mass, len_m);

    return 0;
}

void modul(short x) {
    if (x < 0) {
        x = -x;
    }
    cout << x << endl;
}

float squr(float a, float b) {
    float res = 2*(a+b);
    return res;
}