#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);

	if (y >= 45) {
		printf("%d %d", x, y - 45);
	}

	else if ((x > 0 && x <= 23) && y < 45) {
		printf("%d %d", x - 1, y + 15);
	}
	else if (x == 0 && y < 45) {
		printf("%d %d", x = 23, y + 15);
	}
	return 0;
}
