#include<stdio.h>

int StringLength(char s[]);
void ToUpperString(char s[]);
void StringCopy(char dst[], char src[]);
void StringConcat(char s1[], char s2[]);
int StringComp(char s1[], char s2[]);


int main() {
	char str[3] = {'h','i','\0'};
	char str1[4] = { 'h','i','!','\0' };
	char str2_0[4] = { 'h','i','!','\0' };
	char str2_1[4] = {'z','\0'};
	char str3[8] = { 'h','i','\0' };
	int n = StringLength(str);
	printf("문자열의 개수 %d\n", n);
	ToUpperString(str1);
	StringCopy(str2_1, str2_0);
	StringConcat(str3, "hello");
	int c = StringComp("hello", "nice");
	printf("반환값은 %d\n", c);
}

int StringLength(char s[]) {
	int num=0;
	for (int i = 0;!(s[i]=='\0'); i++) {
		num++;
	}
	return num;
}

void ToUpperString(char s[]) {
	for (int i = 0; !(s[i] == '\0'); i++) {
		if (s[i]>='a'&&s[i]<='z') {
			s[i] -= 32;
		}
	}
	printf("변환 결과 %s\n", s);
}

void StringCopy(char dst[], char src[]) {
	for (int i = 0; !(src[i] == '\0'); i++) {
		dst[i] = src[i];
	}
	printf("원본 %s\n", src);
	printf("복사본 %s\n", dst);
}

void StringConcat(char s1[], char s2[]) {
	int l = 0;
	for (l = 0; !(s1[l] == '\0'); l++);
	for (int i = 0; !(s2[i]=='\0'); i++) {
		s1[l] = s2[i];
		l++;
	}

	printf("연결본 %s\n", s1);
}

int StringComp(char s1[], char s2[]) {
	int i = 0;
	int num = 2;
	do { 
		if (s1[i] == s2[i]) {
			num = 0;
		} 
		else if (!(s1[i]==s2[i])) {
			num = 1;
		}
			i++;
	} while (!(s1[i]=='\0')||!(s2[i]=='\0'));

	if (num == 0)return 0;
	else if (num == 1)return 1;
}