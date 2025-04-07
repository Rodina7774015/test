#include<stdio.h>
int main()
{
long two_opendr,one_opender,res;
int flag=0;
printf("Эта программа вычисляет результаты деления по модулю.\n");
printf("Введите целое число, которое будет служить вторым операндом:\n");
scanf("%ld",&two_opendr);
while (flag!=1)
{
    printf("Теперь введите первьй операнд:\n");
    scanf("%ld",&one_opender);
    if (one_opender==0)
    {
        flag=1;
    }
    res=one_opender%two_opendr;
    printf("%ld",res);
    printf("<= О для выхода из программы\n");
}
printf("ГОТОВО\n");

return 0;
}
