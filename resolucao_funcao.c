#include <stdio.h>
#include <math.h>

int main(){
	int xA = 0, xB = 0;
	int yA = 0, yB = 0;

	float result = 0.0;

	printf("Insert value of Xa = ");
	scanf("%d", &xA);
	printf("Insert value of Xb = ");
	scanf("%d", &xB);
	printf("Insert value of Ya = ");
	scanf("%d", &yA);
	printf("Insert value of Yb = ");
	scanf("%d", &yB);

	result = sqrt((xB - xA) * (xB - xA)) + ((yB - yA) * (yB - yA));
	printf("Result = %f", result);
	return 0;
}
