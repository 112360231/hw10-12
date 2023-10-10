#include <stdio.h>

int main() {
	double weightK, heightM;
	double bmi;


	printf("請輸入您的體重（公斤）: ");
	scanf("%lf", &weightK);

	printf("請輸入您的身高（公尺）: ");
	scanf("%lf", &heightM);

	
	bmi = (weightK / (heightM * heightM));
		
	printf("您的BMI值為: %.2lf\n", bmi);

	if (bmi < 18.5)printf("underweight less than 18.5\n");
	else if (bmi > 18.5 && bmi < 25)printf("normal between 18.5 and 24.9\n");
	else if (bmi > 24.9 && bmi < 30)printf("overweight between 25 and 29.9\n");
	else if (bmi >= 30)printf("obese 30 or greater\n");

	return 0;
}