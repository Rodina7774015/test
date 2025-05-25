#include <stdio.h>
#define plya_gema 10
int main()
{
   char name[20];
   int plya[11];
   int sum=0;
   printf("Добрый день,как Вас зовут :\n");
   scanf("%s",name);
   printf("%s,вносите ваши результаты с игры :\n",name);
   for (int i=0;i<=plya_gema;i++)
       scanf("%d",&plya[i]);
   printf("Вы ввели :\n");
   for (int i=0;i<=plya_gema;i++)
       printf("%d ",plya[i]);
       printf("\n");
   printf("общая сумма вышей игры :");
   for (int i=0;i<=plya_gema;i++)
       sum+=plya[i];
   printf("%d",sum);

}