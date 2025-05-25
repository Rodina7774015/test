#include<stdio.h>
#define ONE_BANK 350
int main()
{
int user_date;
int number_of_cans;
printf("Введите число квадратных футов, которые необходимо покрасить:");
scanf("%d",&user_date);
number_of_cans=user_date/ONE_BANK;
number_of_cans+=(user_date%ONE_BANK==0)?0:1;
printf("%d%s",number_of_cans,(number_of_cans==1)?"банка":"банки");
}