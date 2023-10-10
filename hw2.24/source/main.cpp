#include <stdio.h>

int main() {
	int number;

	
	printf("叫块俱计: ");
	scanf("%d", &number);

	
	if (number % 2 == 0) {
		printf("%d 琌案计\n", number);
	}
	else {
		printf("%d 琌计\n", number);
	}

	return 0;
}