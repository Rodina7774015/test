// Н а п и ш и т е программу для вывода таблицы, в к а ж д о й строке которой представ­
// лено целое число, его квадрат и его куб. Запросите у пользователя верхний и
// н и ж н и й пределы таблицы. Используйте цикл for.
#include <stdio.h>
int main()
{
    int user_start;
    int user_end;
    int x_2=0;
    int x_3=0;
    printf("Введите два числа :\n");
    if (scanf("%d%d",&user_start,&user_end)==2 && user_start<=user_end)
    {
        printf("число    x^2    x^3 \n");
        for (int i=user_start;i<=user_end;i++)
        {   
            printf(" %d",i) ;
          
            x_2=i*i;
            x_3=i*i*i;
            printf("%9.d|",x_2);
            printf("%7.d|",x_3);
            printf("\n");
            
        }
    }
    else{printf("error");}
}