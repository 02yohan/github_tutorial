#include<stdio.h>

int FindCharType(char word);

int main() {
	char word;
	scanf_s("%c", &word);
	int A = FindCharType(word);
	printf("%d", A);
}

int FindCharType(char word) {

	if (word==' ') {
		return 1;
	}
	else if (word=='	') {
		return 2;
	}
	else if (word=='\n') {
		return 3;
	}
	else if (65<=word&&word<=90) {
		return 4;
	}
	else if (48<=word&&word<=57) {
		return 4;
	}
	else if (97 <= word && word <= 122) {
		return 4;
	}
	else{
		return 0;
	}
}