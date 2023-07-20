#include <iostream>
using namespace std;

void foo() {
    cout << "foo\n";
}

void print(int a) {
    cout << "print: " << a << endl;
}

int sign(double x) {
    if (x < 0) return -1;
    else if (x > 0) return 1;

    return 0;
}

int main() 
{

    // void(*ptr_func)();
    // ptr_func = foo;
    // ptr_func();

    //////////////////////////////////////////

    // void(*ptr_func)(int);
    // ptr_func = print;
    // ptr_func(5);

    //////////////////////////////////////////

    int(*ptr_func)(double);
    ptr_func = sign;
    cout << ptr_func(3.32) << endl;

   return 0;
}