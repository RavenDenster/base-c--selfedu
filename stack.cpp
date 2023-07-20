#include <stack>
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct {
    char name[50];
    short old;
} DATA;

int main() {
    setlocale(LC_ALL, "rus");

    stack<DATA> s;

    DATA d = {"Иван", 20};
    s.push(d);

    strcpy_s(d.name, "Николай");
    d.old = 30;
    s.push(d);

    strcpy_s(d.name, "Анатолий");
    d.old = 50;
    s.push(d);

    cout << "Рамер стека: " << s.size() << endl << endl;

    while (!s.empty()) {
        d = s.top();
        cout << "Удаление объекта: " << d.name << " " << d.old << endl;
        s.pop();
    }

    return 0;
}