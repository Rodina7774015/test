#include<stdio.h>
#include<ctype.h>
int main()
{
    char user_input;
    while ((user_input=getchar())!='\n')
    {
     if (user_input==' ')
     continue;
     putchar(user_input);   
    }      
        
    


}
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char user_input;
//     printf("Дайте мне букву алфавита, и я укажу вам ");
//     printf("название животного, начинающееся с этой буквы.\n");
//     printf("Введите букву или # для завершения.\n");

//     while ((user_input = getchar()) != '#') {
//     

//         if (!islower(user_input)) {  // Проверяем, что это строчная буква
//             printf("Ошибка: введите строчную букву (a-z)!\n");
//             continue;
//         }

//         switch (user_input) {
//             case 'c':
//                 printf("слон\n");
//                 break;
//             case 'l':
//                 printf("лошадь\n");
//                 break;
//             default:
//                 printf("Животное с такой буквой не найдено.\n");
//         }
//     }

//     return 0;
// }