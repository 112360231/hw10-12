#include <stdio.h>

int main() {
	double totalMiles, costPerGallon, avgMilesPerGallon, parkingFees, tolls;
	double dailyCost;

	printf("�п�J�@��Ѫ��`���{�ơ]�^���^: ");
	scanf("%lf", &totalMiles);

	printf("�п�J�C�[�ڪ��T�o����]�����^: $");
	scanf("%lf", &costPerGallon);

	printf("�п�J�C�[�ڪ�������p�^����: ");
	scanf("%lf", &avgMilesPerGallon);

	printf("�п�J�@�Ѫ������O�]�����^: $");
	scanf("%lf", &parkingFees);

	printf("�п�J�@�Ѫ��q��O�]�L���O�A�����^: $");
	scanf("%lf", &tolls);


	dailyCost = (totalMiles / avgMilesPerGallon) * costPerGallon + parkingFees + tolls;

	printf("\n�z�@�Ѫ��}��������: $%.2lf\n", dailyCost);

	return 0;
}