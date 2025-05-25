#include<stdio.h>

int main()
{
    int input;
    char ch;
    while (scanf("%d",&input) !=1 )
    {
     while ((ch=getchar()) != '\n')
     putchar(ch);
    printf("Вы ввели не коректное значение\n");
    
    }
    return input;
}