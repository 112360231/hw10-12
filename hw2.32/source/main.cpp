#include <stdio.h>

int main() {
	double weightK, heightM;
	double bmi;


	printf("�п�J�z���魫�]����^: ");
	scanf("%lf", &weightK);

	printf("�п�J�z�������]���ء^: ");
	scanf("%lf", &heightM);

	
	bmi = (weightK / (heightM * heightM));
		
	printf("�z��BMI�Ȭ�: %.2lf\n", bmi);

	if (bmi < 18.5)printf("underweight less than 18.5\n");
	else if (bmi > 18.5 && bmi < 25)printf("normal between 18.5 and 24.9\n");
	else if (bmi > 24.9 && bmi < 30)printf("overweight between 25 and 29.9\n");
	else if (bmi >= 30)printf("obese 30 or greater\n");

	return 0;
}