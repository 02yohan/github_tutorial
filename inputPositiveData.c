#include<stdio.h>
int InputPositiveData(void);

int main() {
	InputPositiveData();
}

int  InputPositiveData(void) {
	int age;
	do {
		printf("나이를 입력하세요.");
		scanf_s("%d", &age);
	} while (age < 0);
	if (age >= 20) {
		printf("성인입니다.\n");
	}
	else
		printf("성인아닙니다.\n");
}

