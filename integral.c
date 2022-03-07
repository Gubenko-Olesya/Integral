#include<stdio.h>

#define eps 0.001

double fabs(double a) { //Gubenko Olesya 112
	return a > eps ? a : -a;
}

//funksiya schitayet integral zadannoi functsii metodom trapetsiy
double integral(double a, double b, double(*f)(double x)) //Gubenko Olesya 112
{
	int n=10, i; //chislo razbieniy, schetchik
	double s=1, better_s=0, part_s, part_l, a1=a; //ploshad, ploshad luchey tochnosti, ploshad kusochka i dlina kusochka
	while((fabs(s-better_s))>eps)
	{
		part_l=(b-a)/n; //vichislyaem dlinu kusochka
		s=better_s;
		better_s=0;
		for (i=0; i<n; i++) { //vichislyaem ploshad kazhdogo kusochka kak ploshad trapetsii i skladivaem vse kusochki
			part_s = (f(a1 + part_l/2))*part_l;
			better_s = better_s + part_s;
			a1 = a1 + part_l;
		}
		n*=2; //udvaivaem setku
		a1=a;
	}
	return better_s;
}

