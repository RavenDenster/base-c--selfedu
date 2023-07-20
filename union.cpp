#include <iostream>
using namespace std;

union tag_value {
    int vi;
    double vd;
    char vc;
};

enum tag_type {VT_NONE, VT_INT, VT_FLOAT, VT_CHAR};

struct tag_var {
    union tag_value value;
    // short type_var;
    tag_type type_var;
};

int main() 
{
    setlocale(LC_ALL, "rus");

    struct tag_var var[3];

    var[0].type_var = VT_INT;
    var[0].value.vi = 10;

    var[1].type_var = VT_FLOAT;
    var[1].value.vd = 2.3;

    var[2].type_var = VT_CHAR;
    var[2].value.vc = 'd';

    for (int i = 0; i < 3; i++) {
        switch (var[i].type_var) {
            case VT_INT: cout << "1: " << var[i].value.vi << endl; break;
            case VT_FLOAT: cout << "2: " << var[i].value.vd << endl; break;
            case VT_CHAR: cout << "3: " << var[i].value.vc << endl; break;
            default: cout << "Значение переменной не определено\n";
        }
    }

    return 0;
}