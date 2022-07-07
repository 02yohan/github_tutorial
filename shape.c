#include<stdio.h>

void DisplayTriangle(int h);

int main() {
	int a;
	printf("숫자를 입력하세요\n");
	scanf_s("%d", &a);
	DisplayTriangle(a);
}

void DisplayTriangle(int h) {
	for (int a = 0; !(a == h); a++) {
		for (int c =h; !(c == 0); c--) {
			printf(" ");
		}
		for (int i = 0; !(i == a + 1); i++) {
			printf("*");
		}
		printf("\n");
	}
}
/*
printf("  ");printf("  ");printf("  ");printf("  ");printf("  ");
printf("*");
printf("\n");
printf("  ");printf("  ");printf("  ");printf("  ");
printf("*"); printf("*");
printf("\n");*/