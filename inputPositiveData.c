#include<stdio.h>
int InputPositiveData(void);

int main() {
	InputPositiveData();
}

int  InputPositiveData(void) {
	int age;
	do {
		printf("���̸� �Է��ϼ���.");
		scanf_s("%d", &age);
	} while (age < 0);
	if (age >= 20) {
		printf("�����Դϴ�.\n");
	}
	else
		printf("���ξƴմϴ�.\n");
}

