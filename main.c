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
    printf("������� �1-���������� ��� ���� ����������� �����. ������������ ������� ���(a, b) � ���(a, b)\n��������: ���(a, b) = a * b / ���(a, b).\n (������� 5 �� 4-�� �����)\n");
    printf("������� �2-����� ����� ���� ������ a/b � c/d. ����� �������� ������������ ������.\n��������: �������� ������� cancel(a, b, p, q), ������� ����� a / b �������� � ������������� ���� p / q .\n (������� 6 �� 4-�� �����)\n");
    int p=1;
    printf("\n");
    while (p!=0) //������ 0-����� �� ���������
    {
     printf("�������� ����� �������:");
     scanf("%d",&p);
     switch(p) //������� ������� 1 ��� 2
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
             printf("������� ��������� ������ �����=");
             scanf("%d",&q1);
             printf("������� ����������� ������ �����=");
             scanf("%d",&q2);
             printf("������� ��������� ������ �����=");
             scanf("%d",&w1);
             printf("������� ����������� ������ �����=");
             scanf("%d",&w2);
             e=nok(q2,w2);
             r1=e/q2;
             r2=e/w2;
             s=q1*r1+w1*r2;
             printf("����� �����:S=");
             cancel(s,e);
             printf("\n");
             break;

    }
    }


    return 0;
}
