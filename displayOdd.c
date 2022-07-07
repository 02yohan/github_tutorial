#include<stdio.h>

void DisplayOdd(int s, int e, int m);

int main(void) {
	DisplayOdd(1, 100, 5);
}

void DisplayOdd(int s, int e, int m){
	for (int i = s; !(i == e); i++) {
		if (!(i % m == 0) && !(i % 2 == 0)) {
			printf("%d\n", i);
		}
	}
}