
#include <stdio.h>
#define dollor_Dav 100
int main()
{
    int balans_Dav=0;
    int balans_Didr=100;
    int flag=1;
    int count=0;
while (flag)
{
balans_Didr=balans_Didr*0.05;
balans_Dav=dollor_Dav*0.05;
if(balans_Dav==balans_Didr)
{
    flag=0;
}
count++;
}
printf("%d",count);

}