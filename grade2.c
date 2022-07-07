#include<stdio.h>
int InputScore(void);
char GetGrade(int A, int B, int C);

	int s[2];

int main() {
	for (int i =0; !(i == 5); i++) {
		InputScore();
	printf("%c\n", GetGrade(s[0], s[1], s[2]));
	}
}

int InputScore(void) {
	do {
		printf("1번째 점수\n");
		scanf_s(" %d", &s[0]);
	} while (!(4.5 >= s[0] && s[0] >= 0));
	do {
		printf("2번째 점수\n");
		scanf_s(" %d", &s[1]);
	} while (!(4.5 >= s[1] && s[1] >= 0));
	do {
		printf("3번째 점수\n");
		scanf_s(" %d", &s[2]);
	} while (!(4.5 >= s[2] && s[2] >=0));
	}
		

char GetGrade(int A, int B, int C) {
	double G = (A + B + C) / 3;
 if (G >= 4) return 'A';
	else if (4>G&&G >= 3)return 'B';
	else if (3>G&&G >= 2)return 'C';
	else if (2>G&&G >= 1)return 'D';
	else if (0<=G&&G < 1)return 'F';
}