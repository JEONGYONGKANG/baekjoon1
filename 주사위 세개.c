#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	if ((a == b) && (b == c)) { // a,b,c가 같을 때
		int z = 10000 + (a * 1000);
		printf("%d", z);
	}
	else if ((a == b) || (a == c)) { // a,b,c 중 2개가 같을 때
		int z = 1000 + (a * 100);
		printf("%d", z);
	}
	else if (b == c) {
		int z = 1000 + (b * 100);
		printf("%d", z);
	}
	else if ((a > b) && (a > c)) { // 가장 큰 수 판별
		int z = a * 100;
		printf("%d", z);
	}
	else if ((b > a) && (b > c)) {
		int z = b * 100;
		printf("%d", z);
	}
	else if ((c > a) && (c > b)) {
		int z = c * 100;
		printf("%d", z);
	}
	return 0;
}
