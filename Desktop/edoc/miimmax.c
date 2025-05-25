#include <stdio.h>
int main()
{
    int user_number;
    int max,min;
    printf("ВВведиле ряд цифр:\n");
    scanf("%d",&user_number);
    for (max=min=user_number;(scanf("%d",&user_number))==1;)
    {
        if (user_number>max)
        max=user_number;
        if (user_number<min)
        min=user_number;
    }

    printf("%d %d",min,max);

}