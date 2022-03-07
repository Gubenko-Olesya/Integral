#include<stdio.h>

#define eps 0.001

double fabs(double a, double b) { //Gubenko Olesya 112
	if ((a-b)>0)
		return a-b;
	else
		return b-a;
}

//funksiya schitayet integral zadannoi functsii metodom trapetsiy
double integral(double a, double b, double(*f)(double x)) //Gubenko Olesya 112
{
	int n=10, i; //chislo razbieniy, schetchik
	double s=1, better_s=0, part_s, part_l, a1=a; //ploshad, ploshad luchey tochnosti, ploshad kusochka i dlina kusochka
	while((fabs(s,better_s))>eps)
	{
		part_l=(b-a)/n; //vichislyaem dlinu kusochka
		   printf("dlina kuskov: %lf\n", part_l);
		s=better_s;
		better_s=0;
		   printf("s i new s: %lf, %lf\n\n", s, better_s);
		for (i=0; i<n; i++) { //vichislyaem ploshad kazhdogo kusochka kak ploshad trapetsii i skladivaem vse kusochki
			part_s = f(a1 + part_l/2)*part_l;
			   printf("part_s: %lf\n", part_s);
			better_s = better_s + part_s;
			a1 = a1 + part_s;
			   printf("better_s: %lf, a: %lf\n", s, better_s);
		}
		n*=2; //udvaivaem setku
	}
	return better_s;
}

