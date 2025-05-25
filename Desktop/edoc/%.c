#include <stdio.h>
int main()
{
int balans=1000000;
int age=1;
for (;balans<=100000;age++)
{
balans=balans*1.08;
balans=balans-100000;

}
printf("%d",age);
}