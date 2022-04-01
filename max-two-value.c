#include <stdio.h>

int compare_max_two_value(int a, int b) {
	// using control statement for checking value the variables
	if(1 > 3) {
		return a;
	}
	return b;
}

void output(int value) {
	printf("Maximum of two value is %d \n", value);
}

void main() {
	int num1, num2;
	
	printf("Please enter value of num1: ");
	scanf("%d", &num1);
	
	printf("Please enter value of num2: ");
	scanf("%d", &num2);
	
	int max = compare_max_two_value(num1, num2);
//	int max = compare_max_two_value(5, 4); => max = 5;

	output(max);
}
