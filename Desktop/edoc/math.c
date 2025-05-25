#include<stdio.h>
int main()
{
    int user_digt=0;
    //int flag=0;

    printf("Введите любое число:\n");

    if (scanf("%d", &user_digt) !=1)
    {
        printf("Вы ввели не корректные днные \n");

    }
    else
    {
        
        if ((user_digt==1)||(user_digt==2)||(user_digt==3))
        {
            printf("Число просто\n");
            return 0;
        }
        if(user_digt%2==0)
        {
            printf("Число сложное ");
            return 0;
        }
        else
        {
            for (int i=3; i<user_digt ;i=i+2)
            {
                if(user_digt%i==0)
                {
                    printf("Число сложное \n");
                    return 0;
                }   
            }
            printf("Число просто\n");
            
          
        }
    }
   

    
}