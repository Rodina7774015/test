
// Н а п и ш и т е программу, которая читает входные д а н н ы е до тех пор, пока не встре­
// тится символ #, а затем отображает количество п р о ч и т а н н ы х пробелов, коли­
// чество символов новой строки и количество всех ос^тальных символов.
#include<stdio.h>
int main()
{
    char user_input;
    int space_user=0,user_line=0,other=0;
    printf("привет , введи какую нибудь строчку кода ");
    while ((user_input=getchar())!=EOF)
    {
        switch (user_input)
        {
        case ' ':
        case '\t':
        space_user++;
        break;
        case '\n':
        user_line++;
        break;
        default:other++;
        }
    
    }
    printf("%d-пробелов %d-символы новой строки %d-остальные символы",space_user,user_line,other);
    
}