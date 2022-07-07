#include<stdio.h>

int GetIntegerArray(int a[], int n, int s);
void PrintIntegerArray(int a[], int n);
double AverageIntegerArray(int a[], int n);

int main() {
	int a[100] = { 0,  };
	for (int i = 0; !(i == 100) && (!(a[i-1] < 0)||i==0); i++) {
		scanf_s("%d", &a[i]);
	}
	int b = GetIntegerArray(a, 100, -1);
	double c = AverageIntegerArray(a, b);
	PrintIntegerArray(a, b);
	printf("%lf\n", c);

	return 0;
}

int GetIntegerArray(int a[], int n, int s) {
	for (int i = 0; !(i == 100) && (!(a[i - 1] < 0) || i == 0); i++)
		if (a[i] == s)
			return i;
}
void PrintIntegerArray(int a[], int n) {
	for (int i = 0; !(n == i); i++)
		printf("%d\n", a[i]);
}
double AverageIntegerArray(int a[], int n) {
int Average = 0;
	for (int i = 0; !(i == n); i++) {
		Average += a[i];
	}
	return Average / n;
}