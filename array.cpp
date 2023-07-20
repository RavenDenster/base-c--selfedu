#include <iostream>
using namespace std;

#define N 10

int main() 
{
    setlocale(LC_ALL, "rus");

    // float y[N], k = 0.5, b = 2;

    // for (int x = 0; x < N; ++x)
    //     y[x] = k*x+b;

    // for (int x = 0; x < N; ++x)
    //     cout << y[x] <<  " ";

    //////////////////////////////////////////

    // short E[N][N];

    // for (int i = 0; i < N; ++i)
    //     for (int j = 0; j < N; ++j)
    //         if (i == j) E[i][j] = 1;
    //         else E[i][j] = 0;
    
    // for (int i = 0; i < N; ++i) {
    //     for (int j = 0; j < N; ++j)
    //         cout << E[i][j] << " ";
    //     cout << endl;
    // }

    //////////////////////////////////////////

    // int data[] = {2,14,61,64,45};
    // int n = sizeof(data)/sizeof(int);
    // cout << n;

    //////////////////////////////////////////

    // short a[9] = {1,2,3,5,6,7,8,9};

    // for (int i = 8; i > 3; --i)
    //     a[i] = a[i-1];

    // a[3] = 4;

    // for (int i = 0; i < 9; ++i)
    //     cout << a[i] << " ";

    //////////////////////////////////////////

    // short a[9] = {1,2,3,4,5,6,7,8,9};

    // for (int i = 5; i < 8; ++i)
    //     a[i] = a[i+1];

    // for (int i = 0; i < 9; ++i)
    //     cout << a[i] << " ";

    //////////////////////////////////////////

    short a[] = {3,5,1,6,2,4};
    int n = sizeof(a) / sizeof(short);

    for (int i = 0; i < n - 1; ++i) {
        short min = a[i];
        short pos = i;

        for (int j = i + 1; j < n; ++j)
            if (min > a[j]) {
                pos = j;
                min = a[j];
            }

        short t = a[i];
        a[i] = a[pos];
        a[pos] = t;
    }

    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";

   return 0;
}