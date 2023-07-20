#include <iostream>
using namespace std;

#define  N 3

typedef struct {
    char name[50];
    char lastname[50];
    unsigned char old;
    float weight;
} PERSON;

int main() 
{
    setlocale(LC_ALL, "rus");

    // FILE* fp;

    // fopen_s(&fp, "my_file.txt", "r");

    // if (fp == NULL) {
    //     cout << "Не удалось открыть файл" << endl;
    //     return 0;
    // }

    // char ch;
    // fseek(fp, 0, SEEK_END);
    // int length = ftell(fp);
    // cout << "Длина строки: " << length << endl;

    // for (int i = 1; i <= length; ++i) {
    //     fseek(fp, -i, SEEK_END);
    //     ch = getc(fp);
    //     putchar(ch);
    // }
    // putchar('\n');

    // fclose(fp);

    ///////////////////////////////////////////////

    // FILE* fp;
    // fopen_s(&fp, "out_b.dat", "wb");

    // if (fp == NULL) {
    //     cout << "Не удалось открыть файл" << endl;
    //     return 0;
    // }

    // int a = 1000;

    // fwrite((char *)&a, sizeof(int), 1, fp);
    // fclose(fp);

    // int b = 0;
    // fopen_s(&fp, "out_b.dat", "rb");
    // size_t elements = fread((char *)&b, sizeof(int), 1, fp);
    // fclose(fp);

    // cout << elements << " " << b << endl;

    ///////////////////////////////////////////////

    // PERSON p[N] = {{"Иван", "Иванов", 24, 77.6}, 
    //                 {"Семен", "Семенович", 32, 85.3},
    //                 {"Борис", "Борисович", 40, 73.5}};

    // FILE* fp;
    // fopen_s(&fp, "out_b.dat", "wb");

    // if (fp == NULL) {
    //     cout << "Не удалось открыть файл" << endl;
    //     return 0;
    // }

    // fwrite((char *)&p, sizeof(PERSON), N, fp);
    // fclose(fp);

    // PERSON p2[N];

    ///////////////////////////////////////////////

    if (rename("out/file1.dat", "out/file2.dat") == 0) cout << "Файл успешно переименован\n";
    else cout << "Ошибка переименования файла\n";

    if (remove("def.file") != 0) cout << "Ошибка удаления файла\n";
    else cout << "Файл успешно удалён\n";

    return 0;
}