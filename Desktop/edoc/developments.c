// Задача:
// Напишите программу, которая читает входные данные до тех пор, пока не встретится символ #. 
// Программа должна выводить каждый введенный символ и его десятичный код ASCII. 
// Каждая строка вывода должна содержать восемь пар "символ-код".

#include<stdio.h>
int main()
{
char user_letter;
int counter=0;
printf("Введите последовательность символов:\n");
while ((user_letter=getchar())!='#')
{   //printf("Введите последовательность символов:\n");
    if (user_letter=='\n')
    continue;
    counter++;
    printf("%c %d ",user_letter,user_letter);
    if ((counter%8)==0){
        counter=0;
        printf("\n");
    }
}
printf("Конец программы");

}