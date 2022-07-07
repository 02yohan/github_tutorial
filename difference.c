#include<stdio.h>

double Difference(double, double);
int main() {
	double result = Difference(1.2, 2.5);
	printf("%lf", result);
	return 0;
}

double Difference(double first, double second) {
	double big = (first > second) ? first : second;
	double small = (first < second) ? first : second;
	double result = big - small;
	return result;
}