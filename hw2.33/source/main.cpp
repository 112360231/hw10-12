#include <stdio.h>

int main() {
	double totalMiles, costPerGallon, avgMilesPerGallon, parkingFees, tolls;
	double dailyCost;

	printf("請輸入一整天的總里程數（英里）: ");
	scanf("%lf", &totalMiles);

	printf("請輸入每加侖的汽油價格（美元）: $");
	scanf("%lf", &costPerGallon);

	printf("請輸入每加侖的平均行駛英里數: ");
	scanf("%lf", &avgMilesPerGallon);

	printf("請輸入一天的停車費（美元）: $");
	scanf("%lf", &parkingFees);

	printf("請輸入一天的通行費（過路費，美元）: $");
	scanf("%lf", &tolls);


	dailyCost = (totalMiles / avgMilesPerGallon) * costPerGallon + parkingFees + tolls;

	printf("\n您一天的開車成本為: $%.2lf\n", dailyCost);

	return 0;
}