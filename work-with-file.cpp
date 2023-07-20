#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct {
    char author[50];
    char title[100];
    short year;
    int pages;
    float price;
    double weight;
} BOOK;

int main() 
{
    setlocale(LC_ALL, "rus");

    // char str[] = "Привет мир!";

    // FILE* fp;
    // fopen_s(&fp, "my_file.txt", "w");

    // if (fp != NULL) {
    //     for (int i = 0; str[i] != '\0'; ++i) {
    //         putc(str[i], fp);
    //     };
    //     fclose(fp);
    // }

    // fopen_s(&fp, "my_file.txt", "r");

    // if (fp == NULL) {
    //     cout << "Не удалось открыть файл" << endl;
    //     return 0;
    // }

    // char buff[100];
    // int i = 0;
    // while ((buff[i] = getc(fp)) != EOF) i++;

    // buff[i] = '\0';

    // cout << buff << endl;
    // fclose(fp);

    /////////////////////////////////////////

    // char str[] = "Привет мир!";

    // FILE* fp;
    // fopen_s(&fp, "my_file.txt", "w");

    // if (fp != NULL) {
    //     fputs(str, fp);
    //     fclose(fp);
    // }

    // fopen_s(&fp, "my_file.txt", "r");

    // if (fp == NULL) {
    //     cout << "Не удалось открыть файл" << endl;
    //     return 0;
    // }

    // char buff[100];
    // fgets(buff, sizeof(buff), fp);

    // cout << buff << endl;
    // fclose(fp);

    ///////////////////////////////////////////////////

    BOOK b, book = {"Пушкин", "Онегин", 200, 80, 192.5, 80.78};
    FILE* fp;

    fopen_s(&fp, "book.dat", "w");
    if (fp != NULL) {
        fprintf(fp, "%s %s %d;%d;%.2f;%.2f", book.author, book.title, book.year, book.pages, book.price, book.weight);
        fclose(fp);
    }

    fopen_s(&fp, "book.dat", "r");

    if (fp == NULL) {
        cout << "Не удалось открыть файл" << endl;
        return 0;
    }

    fscanf_s(fp, "%s %s %hd;%d;%f;%lf", b.author, sizeof(b.author), b.title, sizeof(b.title), &b.year, &b.pages, &b.price, &b.weight);
    fclose(fp);

    cout << b.author << endl;

    return 0;
}