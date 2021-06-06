// write a C programm to calculate area of circle of radius 5cm.

#include<stdio.h>

int main(){
	int radius = 5;
	float area;
	float pi=3.1428;
	
	const int superScriptTwo = 253; //ascii value of super script two
	
	area = pi*radius*radius;
	
	printf("Area of circle of radius %dcm is: %f cm%c",radius,area,superScriptTwo);
	
	return 0;
}
