#include <stdio.h>

int main() {
	int average;
	int numbers[4];
	numbers[0] = 1;
	numbers[1] = 3;
	numbers[2] = 2;
	numbers[3] = 10;
	average = (numbers[0]+numbers[1]+numbers[2]+numbers[3])/4;
	printf("The average of the defined array of numbers is %d", average);
	return 0;
}
