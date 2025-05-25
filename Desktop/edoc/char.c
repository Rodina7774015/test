#include<stdio.h>
#include<iso646.h>
#define dot '.'
int main()
{
    int  letters ;
     int quantity_letter=0;
    while ((letters=getchar())!= dot)
    {
        if ((letters != '"') &&(letters!='\''))
        quantity_letter++;
        
    }
    printf("Количество букв %d, отличное от - \" ",quantity_letter);
    
}
