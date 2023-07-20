#include <iostream>

#define TWO 2
#define FOUR TWO*TWO
#define PX cout << "Х равно " << x << endl
#define STR "Х равно "
#define SQUARE(X) X*X
#define P(A, B) 2*(A+B)

using namespace std;
// int main() 
// {
//    setlocale(LC_ALL, "rus");
//     int x = TWO;
//     PX;
//     x = FOUR;
//     cout << STR << x << endl;
//     x = SQUARE(3);
//     PX;
//     x = P(3, 5);
//     PX;

//     return 0;
// }

#define WIN 

#ifdef WIN
    #include <iostream>
#else
    #include<stdio.h>
#endif

int main() 
{
   int x = 5;
#ifdef WIN
    cout << x << endl;
#else
    printf("%d\n", x);
#endif
    return 0;
}