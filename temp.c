
#include <stdio.h>
int main ()

{
char sy='A';
int i=0;
char d [26];
while('Z'>=sy)
{
    d[i]=sy;
    sy++;
    i++;
}
for (int n=0;n!=26;n++){
    printf("%c",d[n]);
    printf("=%d \n",d[n]);
}
return 0;
}
// Напишите программу, которая создает массив из 26 элементов и помещает в
// него 26 строчных букв английского алфавита. Также предусмотрите вывод со­
// держимогоэтого массива.

