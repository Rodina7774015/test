#include <stdio.h>
#define letter 'F'//начальная буква 
#define min_letter 5 // последняя буква 

int main()

{
    char sy;

for (int i=0;i<=min_letter;i++) //цикл для строчек 
{
    for (sy=letter;sy>=(letter-i);sy--)
    printf("%c",sy);
    printf("\n");
}
}
// #include <stdio.h>
// #define letter 'A'//начальная буква 
// #define max_letter 6 // последняя буква 

// int main()

// {
//     char sy;

// for (int i=0;i<=max_letter;i++) //цикл для строчек 
// {
//     for (sy=(letter+i);sy<=(letter+max_letter);sy++)
//     printf("%c",sy);
//     printf("\n");
// }
// }