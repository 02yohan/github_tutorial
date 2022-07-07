#include<stdio.h>

int InputScore(void);
char GetGrade(int, int, int);

int main() {
	int result = InputScore();
	char G = GetGrade(88, 88, 88);
	printf("%d\n", result);
	printf("%c\n", G);

	return 0;
}

int InputScore(void) {
	int score;
	scanf_s("%d", &score);
	if (100 < score && score < 0) {
		return score;
	}
	else {
		return -1;
	}
}

char GetGrade(int first, int second, int third) {
	int Average= (first + second + third)/3;

	switch (Average/10)
	{
	case 9: {
		return 'A';
	}
	case 8: {
		return 'B';
		  }
	case 7:{
		return 'C';
		  }
	case 6:{
		return 'D';
		  }
	default:
		return 'F';
		break;
	}
}