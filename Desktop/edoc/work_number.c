// Напишите программу, которая читает целые числа до тех пор, пока не встретит­
// ся число 0. После прекращения ввода программа должна сообщить общее коли­
// чество введенных четных целых чисел (за исключением 0), среднее значение
// введенных четных целых чисел, общее количество введенных нечетных целых
// чисел и среднее значение нечетных чисел.
#include<stdio.h>

int main()
{
int user_number;
int counter=0;
int count_even=0,count_not_even=0;
//int average_value_EVEN=0,average_value_NEVEN=0;
printf("Введите целочисленные значения :\n ");
int flag=1;
while (flag)
{   
    if((scanf("%d",&user_number)==1) && (user_number != 0))
     {
        counter++;
        if (user_number%2==0)
        {
            count_even++;
            
        }
        else
        {
            count_not_even++;
            
        }
    }
    else
    {
        flag=0;
    }
}
printf("Введенное кол-во значений : %d\nКол-во четных : %d\nКол-во нечетных: %d\n",counter,count_even,count_not_even );

}