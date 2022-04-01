#include <stdio.h>
#include <conio.h>

int compare_max_two_value(int a, int b);

int compare_max_three_values(int x, int y, int z);

void output(int value) {
	printf("Maximum of three value is %d \n", value);
}

void main() {
	int x, y, z;
	
	printf("Please enter value of x: ");
	scanf("%d", &x);
	
	printf("Please enter value of y: ");
	scanf("%d", &y);
	
	printf("Please enter value of z: ");
	scanf("%d", &z);
	
	int max = compare_max_three_values(x, y, z);
	
	output(max);
	
	getch();
}

int compare_max_two_value(int a, int b) {
	// using control statement for checking value the variables
	if(a > b) {
		return a;
	}
	return b;
}

int compare_max_three_values(int x, int y, int z) {
	// x =  5, y = 7, z = 6
	if(x > y) { // condition true
//		if(x > z) {
//			return x;
//		}
//		return z;

		return compare_max_two_value(x, z);
	}else {
//		if(y > z) {
//			return y;
//		}
//		return z;

		return compare_max_two_value(y, z);
	}
}
