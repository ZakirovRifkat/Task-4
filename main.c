#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 int nod(int a, int b)
 {

		int c;
		while (b) { // ���� b!=0 (0-����, ��� ���������-������)
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
    printf("������� �1-���������� ��� ���� ����������� �����. ������������ ������� ���(a, b) � ���(a, b)\n��������: ���(a, b) = a * b / ���(a, b).\n (������� 5 �� 4-�� �����)\n");
    printf("������� �2-����� ����� ���� ������ a/b � c/d. ����� �������� ������������ ������.\n��������: �������� ������� cancel(a, b, p, q), ������� ����� a / b �������� � ������������� ���� p / q .\n (������� 6 �� 4-�� �����)\n");
    int l=1;
    printf("|��� ������ ������� 0|\n");
    printf("\n");
    while (l!=0) //������ 0-����� �� ���������
    {
     printf("�������� ����� �������:");
     scanf("%d",&l);
     switch(l) //������� ������� 1 ��� 2
     {
         case 1:
             printf("������� ������ �����=");
             scanf("%f",&x);
             printf("������� ������ �����=");
             scanf("%f",&y);
             printf("������� ������ �����=");
             scanf("%f",&z);
             n=nok(nok(x,y),z);
             printf("��� ����� x= %.2f y= %.2f z= %.2f ����� %.2f\n",x,y,z,n);
             printf("\n");
             break;
         case 2:
             printf("������� ��������� ������ �����:");
             scanf("%d",&a);
             printf("������� ����������� ������ �����:");
             scanf("%d",&b);
             printf("������� ��������� ������ �����:");
             scanf("%d",&c);
             printf("������� ����������� ������ �����:");
             scanf("%d",&d);
             cancel(a*d+b*c,b*d,&p,&q);
             printf("����� �����:%d/%d\n",p,q);
             printf("\n");

             break;

    }
    }


    return 0;
}
