#include <stdio.h>
#include <string.h> // Для strlen()
#include <math.h>
#define DENSIT 62.4 // Удельная масса человека в фунтах на кубический фут.
#define PERSON "Вы-удевительная личность."
#define PI 3.14
int main()
{
char name [40];//name пердставляет собой массив из 40 символов
float weight,volume;//переменные вес,обьем .
int size,letters;//переменные размер,буквы.
printf("Здраствуйте,как Вас зовут ?");
scanf("%s",name);
printf("Сколько Вы весите в кг?");
scanf("%f",&weight);
size=sizeof(name);
letters=strlen(name);
volume=(weight*2.205)/DENSIT;
printf("Хорошо,%s,ваш обЪем составляет %2.2f кубических фунтов .\n",name,volume);
printf("к тому же ваше имя состоит из %d букв(ы).\n",letters);
printf("и мы располагаем %d байтами для его сохранения .\n",size);
////////////////////////////////////////////////////////
/*char name[40]; // Имя пользователя (массив символов)

printf("Как Вас зовут?\n");
scanf("%s", name);

printf("%s, %s\n", name, PERSON);
printf("Ваше имя состоит из %lu символов и занимает %lu ячеек памяти.\n", (unsigned long)strlen(name), (unsigned long)sizeof name);
printf("Хвалебная речь занимает %lu ячеек памяти.\n", (unsigned long)sizeof(PERSON));
printf("Хвалебная речь состоит из %lu букв.\n", (unsigned long)strlen(PERSON));
///////////////////////////////////////////////////////////////////////////////////////
float area,circum,radius;//обЪявляем переменные площадь,длина окружности, радиус
printf("Какой радиус Вашей пиццы ?");
scanf("%f",&radius);
area=PI*(pow(radius,2));
printf("%f",area);
return 0;*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////

}
