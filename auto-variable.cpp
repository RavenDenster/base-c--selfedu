#include <iostream>
#include <list>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "rus");

    // int ar[] = {2,3,4,2,1};
    // for (auto& val: ar) {
    //     cout << val << endl;
    //     val = 0;
    // }

    // for (const auto& val : ar) {
    //     cout << val << endl;
    // }

    ///////////////////////////////////

    std::list<int> ar = {1,2,3,4,5};

    for (const auto& val : ar) {
        cout << val << endl;
    }

    for (list<int>::iterator i = ar.begin(); i != ar.end(); ++i) {
        cout << *i << endl;
    } 
}