#include<stdio.h>

double FuelEfficiency(double F, double S);


int main() {
	int A=0;
	double F=0, S=0;
	char c1;
	double B;
	do {
		printf("����(l), �Ÿ�(km)\n");
		scanf_s("%lf, %lf", &F, &S);
		B = FuelEfficiency(F, S);
		printf("%f\n", B);
		printf("�ٽ� ����ϰڽ��ϱ�? (Y.N)\n");
		scanf_s(" %c", &c1);
		if ((c1 == 'Y') || (c1 == 'y'))
			A = 1;
	} while (A == 1);
}

double FuelEfficiency(double F, double S) {
	double A=S/F;
		return A;
}