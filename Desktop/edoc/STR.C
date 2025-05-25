#include<stdio.h>
#define STOP '|' 
int main()
{ 
    int lines=1,words=1,offers=0,letter=0;
    char user_letter;
    while ((user_letter = getchar()) != (-1) )
    {   
        if ( user_letter == ' ' || user_letter == '\t' )
        {
            words++;
        }
        if ( user_letter == '.' )
        {
            offers ++ ; 
        }
        if (user_letter=='\n')
        {
            lines++;
        }
        letter++;
    }
    printf("Вы ввели %d-слов,%d-строчек,%d-предложений,%d-символов",words,lines,offers,letter);
    
}