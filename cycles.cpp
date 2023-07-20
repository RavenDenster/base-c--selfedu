#include <iostream>

using namespace std;

int main() 
{
   setlocale(LC_ALL, "rus");
   // double S = 0;
   // int n = 1;

   // while (n <= 1000) {
   //    S += 1.0 / n;
   //    n++;
   // }

   // cout << S << endl;

   //////////////////////////////////////////////////

   // int S = 0;
   // int n = 1;

   // while (S < 100 &&n != 0) {
   //    cout << "Введите целое число: ";
   //    cin >> n;

   //    S += n;
   // }

   // cout << S << endl;

   //////////////////////////////////////////////////

   // int S = 0;
   // int i = 1;

   // while ((S += ++i) < 50);
   
   // cout << S << endl;

   //////////////////////////////////////////////////

   // double S = 0;

   // for (int n = 1; n <= 1000; ++n) S += 1.0 / n;

   // cout << S << endl;

   //////////////////////////////////////////////////

   // double f, k, b;
   // cout << "Введите k и b: ";
   // cin >> k >> b;

   // for (double x = 0; x <= 1; x += 0.1) {
   //    f = k * x + b;
   //    cout << f << endl;
   // }

   //////////////////////////////////////////////////

   // const int secret_code = 13;
   // int code_ent;

   // do {
   //    cout << "Введите секретный код: ";
   //    cin >> code_ent;
   // } while (code_ent != secret_code);

   // cout << "Вы ввели верный код!";

   //////////////////////////////////////////////////

   // int N = 5, M = 7, S = 0;
   
   // for (int i = 0; i < N; ++i)
   //    for (int j = 0; j < M; ++j)
   //       S += i * j;

   // cout << S << endl;

   //////////////////////////////////////////////////

   float x, S = 0;
   int n = 0;

   do {
      cout << "Введите число: ";
      cin >> x;

      if (x < 0) continue;

      n++;
      S += x;
      cout << "Текущая сумма: " << S << endl;
   } while (n < 5);

   return 0;
}