#include<stdio.h>

int main() {
	int a[5] = { 11,22,33,22,44 };
	int b;
	printf("찾고자 하는 값은 ?");
	scanf_s("%d", &b);
	int c = 0;
	for (int i = 0; !(i == sizeof(a) / sizeof(int))&&c==0; i++) {
		if (a[i] == b) {
			printf("%d는 요소%d에 있습니다.", b, i + 1);
			c = 1;
		}
		else if (i == sizeof(a) / sizeof(int) - 1 && c == 0)
			printf("%d는 배열에 없습니다.", b);
	}
}