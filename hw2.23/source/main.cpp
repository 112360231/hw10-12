#include <stdio.h>

int main() {
	int num1, num2, num3;
	int largest, smallest;

	
	printf("�п�J�T�Ӿ��: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	
	largest = smallest = num1;

	
	if (num2 > largest) {
		largest = num2;
	}
	else if (num2 < smallest) {
		smallest = num2;
	}

	
	if (num3 > largest) {
		largest = num3;
	}
	else if (num3 < smallest) {
		smallest = num3;
	}

	
	printf("�̤j�ȬO: %d\n", largest);
	printf("�̤p�ȬO: %d\n", smallest);

	return 0;
}