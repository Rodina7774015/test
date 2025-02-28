#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>
int main()
{
uint32_t u=0xaabbccdd;
printf("%b\n",u);
u=u>>4;
printf("%b\n",u);
u = u | (1 << 4);
printf("%b\n",u);
}
