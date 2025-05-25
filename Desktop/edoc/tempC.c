#include<stdio.h>
int main()
{
    float user_temp=0;
    int temp_low=0;
    int temp_day=0;
    printf("Введие температуру за последние несколько дней \n");
    printf("Если устали введите --q--\n");
    while (scanf("%f",&user_temp)==1)
    {
        if (user_temp<0)
        {
            temp_low++;
        }
        temp_day++;
    }
    printf("Количество введеных дней :%d\nИз них %d - ниже нуля ",temp_day,temp_low);
}