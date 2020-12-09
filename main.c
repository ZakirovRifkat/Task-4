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
int cancel(int k,int m)
{ int c=nod(k,m),k1,m1;
  k1=k/c;
  m1=m/c;

  return printf("%d/%d\n",k1,m1);
}

int main()

{   setlocale(LC_ALL,"Rus");
    float x,y,z,n;
    int q1,q2,w1,w2,s,e,r1,r2,f;
    printf("Задание №1-Определите НОК трех натуральных чисел. Использовать функции НОД(a, b) и НОК(a, b)\nУказание: НОК(a, b) = a * b / НОД(a, b).\n (Задание 5 из 4-го таска)\n");
    printf("Задание №2-Найти сумму двух дробей a/b и c/d. Ответ записать обыкновенной дробью.\nУказание: написать функцию cancel(a, b, p, q), которая дробь a / b приводит к несократимому виду p / q .\n (Задание 6 из 4-го таска)\n");
    int p=1;
    printf("\n");
    while (p!=0) //введёте 0-выход из программы
    {
     printf("Выберите номер задания:");
     scanf("%d",&p);
     switch(p) //выбрать задание 1 или 2
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
             printf("Введите числитель первой дроби=");
             scanf("%d",&q1);
             printf("Введите знаменатель первой дроби=");
             scanf("%d",&q2);
             printf("Введите числитель второй дроби=");
             scanf("%d",&w1);
             printf("Введите знаменатель второй дроби=");
             scanf("%d",&w2);
             e=nok(q2,w2);
             r1=e/q2;
             r2=e/w2;
             s=q1*r1+w1*r2;
             printf("Сумма дроби:S=");
             cancel(s,e);
             printf("\n");
             break;

    }
    }


    return 0;
}
