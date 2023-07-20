#include <iostream>

typedef struct {
    char a;
    int b;
} VAR;

using namespace std;
int main() 
{
   setlocale(LC_ALL, "rus");
   
    // int a = 0;
    // cout << a << endl;

    // int *p;
    // p = &a;
    // *p = 2;

    // cout << a << endl;

    //////////////////////////////////////////

    // int a[] = {1,2,3,4}; // массив это тоже указатель
    // int *p = a;

    // cout << *p << endl;
    // p++;
    // cout << *p << endl;
    // p++;
    // cout << *p << endl;
    // p++;
    // cout << *p << endl;

    //////////////////////////////////////////

    // int a = 10;
    // int *p1 = &a;
    // char* p2 = (char *)p1;

    // for (int i = 0; i <sizeof(int); ++i) {
    //     cout << (int)p2[i] << endl;
    // }

    //////////////////////////////////////////

    // VAR v = {'#', 5};
    // VAR *p = &v;

    // cout << (*p).a << " " << (*p).b << endl;

    // p->a = '*';
    // p->b = -8;

    // cout << p->a << " " << p->b << endl;    

    //////////////////////////////////////////

    int *p = new int;
    int* p2 = (int *)malloc(sizeof(int));

    *p = 1;
    *p2 = 2;

    cout << *p << " " << *p2 << endl;

    delete p;
    free(p2);

    return 0;
}
