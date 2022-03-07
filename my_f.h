double integral(double a, double b, double(*f)(double x)); //Gubenko Olesya 112
double fabs(double a); //Gubenko Olesya 112
double f(double x) { //Gubenko Olesya 112
	return x*x*x-10*x+3;
}
double d_f(double x) { //Gubenko Olesya 112
	return 3*x*x-10;
}
