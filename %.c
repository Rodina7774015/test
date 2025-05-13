#include <stdio.h>
int main()
{
    int balans_Davna=100.0;//10%простой процент 
    double balans_Deidra=100.0;//5%сложный процент 
    int i=0;
    printf(    "   age   Davna < Deidra\n");
while (i<100)
{
    i++;
    balans_Davna+=10;
   balans_Deidra*=1.05;
   printf("%6d %5d    %1.2lf\n",i,balans_Davna,balans_Deidra);
   if (balans_Deidra>=balans_Davna)
   {
       printf("%d лет ",i);
       break;
   }
//printf("%6d %5d    %1.2lf\n",i,balans_Davna,balans_Deidra);
}
}
