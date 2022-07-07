#include<stdio.h>

int IncomeTax(int Tax);

int main() {
	int result = IncomeTax(30000000);
	printf("%d", result);
	return 0;
}

int IncomeTax(int Tax) {
	int result1;
	if (10000000>=Tax) {
		result1 = Tax * 8 / 1000;
		return result1;
	}
	else if (10000000<Tax&&Tax<=40000000) {
		result1 = Tax * 17 / 100;
		return result1;
	}
	else if (40000000<Tax&&Tax<=80000000) {
		result1 = Tax * 26 / 100;
		return result1;
	}
	else if(80000000<Tax) {
		result1 = Tax * 35 / 100;
		return result1;
	}
}