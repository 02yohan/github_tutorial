#include<stdio.h>

void readNum(int Number);

int main() {
	int Num;
	scanf_s("%d", &Num);
	readNum(Num);
	return 0;
}


void readNum(int Number) {
	printf("%d ", Number / 100);
	printf("%d ", Number % 100 / 10);
	printf("%d", Number % 100 % 10);
}