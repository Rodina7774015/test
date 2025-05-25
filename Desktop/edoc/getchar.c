#include <stdio.h>
#include <ctype.h>
#define SPACE ' '
int main ()
{
    char ch;
    ch=getchar();
    ch=tolower(ch);
    while (ch!='\n')
    {
        if (isalpha(ch)){
            //ch=tolower(ch);
            putchar(ch);
        }
            else 
        {
            putchar(ch);
        }
        ch=getchar();
        
        
    }
    
    
}
