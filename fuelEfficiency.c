#include<stdio.h>

double FuelEfficiency(double F, double S);


int main() {
	int A=0;
	double F=0, S=0;
	char c1;
	double B;
	do {
		printf("연료(l), 거리(km)\n");
		scanf_s("%lf, %lf", &F, &S);
		B = FuelEfficiency(F, S);
		printf("%f\n", B);
		printf("다시 계산하겠습니까? (Y.N)\n");
		scanf_s(" %c", &c1);
		if ((c1 == 'Y') || (c1 == 'y'))
			A = 1;
	} while (A == 1);
}

double FuelEfficiency(double F, double S) {
	double A=S/F;
		return A;
}