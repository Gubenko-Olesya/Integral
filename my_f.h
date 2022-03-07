double integral(double a, double b, double(*f)(double x)); //Gubenko Olesya 112
double fabs(double a, double b); //Gubenko Olesya 112
double f(double x) { //Gubenko Olesya 112
	return 4*x*x-18*x+10;
}
double df(double x) { //Gubenko Olesya 112
	return 8*x-18;
}
