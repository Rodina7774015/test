#include <stdio.h>

long double out(long double c, int b);

int main() 
{
    int user_number1;
    long double user_number2, res;

    printf("Введите число :\n");
    scanf("%Lf", &user_number2);
    
    printf("Введите степень :\n");
    scanf("%d", &user_number1);
    
    res = out(user_number2, user_number1);  // Сохраняем результат
    printf("Результат: %Lf\n", res);  // Выводим его

    return 0;
}

long double out(long double c, int b)
{
    long double power = 1;
    for (int i = 1; i <= b; i++)
        power *= c;
    return power;
}