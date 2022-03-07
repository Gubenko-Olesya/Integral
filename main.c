//programma vichislyaet integral ot funcsii s zadannoi tochnostiu epsilon metodom trapetsiy
#include<stdio.h>
#include"my_f.h"

#define eps 0.001

int main()//Gubenko Olesya 112
{
	double a, b, s, real_s;
	printf("Programma vichislyaet integral ot funcsii s zadannoi tochnostiu epsilon metodom trapetsiy.\n");
	printf("Input a, b in section [a, b].\n");
	scanf("%lf%lf", &a, &b);
	s=integral(a,b,f);
	real_s=df(b)-df(a);
	printf("Integral with the use of the program: %lf,\nDelta: %lf.\n", s, fabs(real_s, s));
	return 0;
}

