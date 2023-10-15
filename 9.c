#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x=0, y=0, z=0;
	
	scanf("%d %d", &x,&y);
	scanf("%d", &z);

	int a = (y + z) % 60;
	int b = (y + z) / 60;

	if (y + z < 60) {
		printf("%d %d", x, y + z); // 분끼리 60이 넘지 않으면 그냥 더할 수 있다.
	}

	else if (x+b<24 && y + z >= 60) {
		printf("%d %d", x+b, a); //분끼리 더했는데 60이 넘고 시를 더했을 때 24가 넘지 않아야 한다.
	}

	else if (x+b >= 24 && y + z >= 60) { //넘으면 24로 나눈 나머지를 써줌.
		printf("%d %d", (x + b) % 24, a);
	}
	
	return 0;
}

