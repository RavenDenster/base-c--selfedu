#include <iostream>

using namespace std;

int main() 
{
    // unsigned char var = 153;
    // unsigned char not_v = ~var;

    // cout << (int)not_v << endl;

    ////////////////////////////////////////

    // unsigned char flags = 5;
    // unsigned char mask = 4;

    // unsigned char res = flags & mask;

    // cout << (int)res << endl;

    ////////////////////////////////////////

    // unsigned char flags = 8;
    // unsigned char mask = 5;

    // flags = flags | mask;
    // cout << (int)flags << endl;

    ////////////////////////////////////////

    unsigned char flags = 9;
    unsigned char mask = 1;

    flags = flags ^ mask;
    cout << (int)flags << endl;

    flags ^= mask;
    cout << (int)flags << endl;

    return 0;
}