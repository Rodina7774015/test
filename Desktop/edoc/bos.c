#include <stdio.h>
#include <stdlib.h>
#include <locale.h>  // для setlocale()
#include <windows.h> // для SetConsoleOutputCP()

int main()
{
    // Устанавливаем локаль и кодировку консоли
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);  // Windows-кодировка Cyrillic
    SetConsoleCP(1251);        // Чтобы scanf правильно работал с русскими буквами

    int ch;
    FILE *fp;
    char fname[50];
    
    printf("Введите имя файла: ");
    scanf("%49s", fname);  // Ограничение длины ввода для безопасности
    
    fp = fopen(fname, "rb");
    
    if (fp == NULL)
    {
        printf("Не удается открыть файл. Программа завершена.\n");
        exit(1);
    }
    
    // Читаем и выводим файл посимвольно
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    
    fclose(fp);
    return 0;
}
