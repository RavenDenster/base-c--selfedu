#include <string.h>
#include <iostream>
using namespace std;

#define N 4

struct tag_book {
       char title[100];
       char author[50];
       short year;
       short pages;
       float price;
};

struct tag_fio {
    char lastname[100];
    char firstname[100];
};

struct tag_people {
    struct tag_fio fio;
    char job[100];
    short old;
};

struct tag_var {
    static int vi;
    static double vd;
    short vs;
};

int tag_var::vi = 0;
double tag_var::vd = 0;

int main() 
{
    setlocale(LC_ALL, "rus");

    // struct tag_book lib[N];
    // strcpy_s(lib[0].title, "Евгений Онегин");
    // strcpy_s(lib[0].author, "Пушкин А.С.");
    // lib[0].year = 2001;
    // lib[0].pages = 81;
    // lib[0].price = 145.51;

    // strcpy_s(lib[1].title, "Война и мир");
    // strcpy_s(lib[1].author, "Толстой Л.Н.");
    // lib[1].year = 2011;
    // lib[1].pages = 654;
    // lib[1].price = 1025.11;

    // lib[2] = lib[0];
    // lib[3] = lib[1];

    // for (int i = 0; i < N; ++i)
    //     cout << lib[i].title << endl << lib[i].author << endl << lib[i].year << endl
    //         << lib[i].pages << endl << lib[i].price << endl;

    //////////////////////////////////////////

    // tag_people p[N];

    // strcpy_s(p[0].fio.firstname, "Владимер");
    // strcpy_s(p[0].fio.lastname, "Осипов");
    // strcpy_s(p[0].job, "Сантехник");
    // p[0].old = 28;

    // p[1] = p[0];

    // for (int i = 0; i < 2; ++i)
    //     cout << p[i].fio.firstname << endl << p[i].fio.lastname << endl << p[i].job << endl
    //         << p[i].old  << endl;

    //////////////////////////////////////////


    return 0;
}