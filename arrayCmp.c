#include<stdio.h>

int ArrayCmp(int a1[], int a2[], int size);

int main() {
	int size=100;
	int list1[100] = {0, };
	int list2[100] = {0, };
	ArrayCmp(list1, list2, 100);

	return 0;
}

int ArrayCmp(int a1[], int a2[], int size) {
	for (int i = 0; !(i == size); i++)
	{
		if (a1[i] == a2[i]) {
			printf("%d번째 배열은 같습니다.\n", i+1);
		}
		else if (!(a1[i] == a2[i])) {
			printf("%d번째 배열은 다릅니다.\n", i+1);
		}
	}

}