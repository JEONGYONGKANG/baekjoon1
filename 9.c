#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x=0, y=0, z=0;
	
	scanf("%d %d", &x,&y);
	scanf("%d", &z);

	int a = (y + z) % 60;
	int b = (y + z) / 60;

	if (y + z < 60) {
		printf("%d %d", x, y + z); // �г��� 60�� ���� ������ �׳� ���� �� �ִ�.
	}

	else if (x+b<24 && y + z >= 60) {
		printf("%d %d", x+b, a); //�г��� ���ߴµ� 60�� �Ѱ� �ø� ������ �� 24�� ���� �ʾƾ� �Ѵ�.
	}

	else if (x+b >= 24 && y + z >= 60) { //������ 24�� ���� �������� ����.
		printf("%d %d", (x + b) % 24, a);
	}
	
	return 0;
}

