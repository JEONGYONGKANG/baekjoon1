#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 1; i < 10; i++) {
		int result = n * i;
		printf("%d * %d = %d\n", n, i, result); //구구단 결과 값 출력
	}
	return 0;
}