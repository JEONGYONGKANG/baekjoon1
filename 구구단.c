N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 1; i < 10; i++) {
		int result = n * i;
		printf("%d * %d = %d\n", n, i, result); // 구구단 결과값 출력
	}
	return 0;
}
