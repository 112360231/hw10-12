#include <stdio.h>

int main() {
	int number;
	printf("number\tsquare\tcube\n");
	for (number = 0; number <= 10; ++number)
	{
		int square = number * number;
		int cube = number * number * number;
        printf("%d\t%d\t%d\n", number, square, cube);
	}
 return 0;
}