#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 int nod(int a, int b)
 {

		int c;
		while (b) { // пока b!=0 (0-ложь, все остальное-истина)
			c = a%b;
			a = b;
			b = c;
		}
		return fabs(a);
	}
int nok(int a, int b )
{

	return  a*b/nod(a,b);
}
void cancel(int a,int b,int *p,int *q)
{
  *p=a/nod(a,b);
  *q=b/nod(a,b);

}







int main()

{   setlocale(LC_ALL,"Rus");
    float x,y,z,n;
    int a,b,c,d,p=0,q=0;
    printf("Задание №1-Определите НОК трех натуральных чисел. Использовать функции НОД(a, b) и НОК(a, b)\nУказание: НОК(a, b) = a * b / НОД(a, b).\n (Задание 5 из 4-го таска)\n");
    printf("Задание №2-Найти сумму двух дробей a/b и c/d. Ответ записать обыкновенной дробью.\nУказание: написать функцию cancel(a, b, p, q), которая дробь a / b приводит к несократимому виду p / q .\n (Задание 6 из 4-го таска)\n");
    int l=1;
    printf("|Для выхода введите 0|\n");
    printf("\n");
    while (l!=0) //введёте 0-выход из программы
    {
     printf("Выберите номер задания:");
     scanf("%d",&l);
     switch(l) //выбрать задание 1 или 2
     {
         case 1:
             printf("Введите первое число=");
             scanf("%f",&x);
             printf("Введите второе число=");
             scanf("%f",&y);
             printf("Введите третье число=");
             scanf("%f",&z);
             n=nok(nok(x,y),z);
             printf("НОК чисел x= %.2f y= %.2f z= %.2f равен %.2f\n",x,y,z,n);
             printf("\n");
             break;
         case 2:
             printf("Введите числитель первой дроби:");
             scanf("%d",&a);
             printf("Введите знаменатель первой дроби:");
             scanf("%d",&b);
             printf("Введите числитель второй дроби:");
             scanf("%d",&c);
             printf("Введите знаменатель второй дроби:");
             scanf("%d",&d);
             cancel(a*d+b*c,b*d,&p,&q);
             printf("Сумма равна:%d/%d\n",p,q);
             printf("\n");

             break;

    }
    }


    return 0;
}
