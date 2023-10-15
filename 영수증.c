#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d\n", &x);
	int n;
	scanf("%d\n", &n);

	int a, b;
	int result = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		result = result + (a * b);
	}

	if (x == result) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}
