#include<stdio.h>

int main() {
	int a[5] = { 11,22,33,22,44 };
	int b;
	printf("ã���� �ϴ� ���� ?");
	scanf_s("%d", &b);
	int c = 0;
	for (int i = 0; !(i == sizeof(a) / sizeof(int))&&c==0; i++) {
		if (a[i] == b) {
			printf("%d�� ���%d�� �ֽ��ϴ�.", b, i + 1);
			c = 1;
		}
		else if (i == sizeof(a) / sizeof(int) - 1 && c == 0)
			printf("%d�� �迭�� �����ϴ�.", b);
	}
}