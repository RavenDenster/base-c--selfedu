#include <iostream>
#include <list>
#include <string.h>
#include <stdio.h>

using namespace std;

typedef struct {
    char title[100];
    char author[50];
    short year;
} BOOK;

int main() {
   setlocale(LC_ALL, "rus");

    list<BOOK> myList;

    BOOK book = {"Онегин", "Пушкин", 2000};

    myList.push_back(book);

    strcpy_s(book.title, "Муму");
    strcpy_s(book.author, "Тургенев");
    book.year = 1995;

    myList.push_front(book);

    strcpy_s(book.title, "Левша");
    strcpy_s(book.author, "Лесков");
    book.year = 2011;

    list<BOOK>::iterator it;
    it = myList.begin();
    myList.insert(++it, book);

    for (it = myList.begin(); it != myList.end(); ++it) {
        book = *it;
        cout << book.title << " " << book.author << " " << book.year << endl;
    }

    myList.clear();

    return 0;
}
