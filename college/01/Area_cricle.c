// write a C programm to calculate area of circle of radius 5cm.

#include<stdio.h>
#include <wchar.h>
#include <locale.h>

int main(int argc, char** argv){

	setlocale(LC_CTYPE, "");

	int radius = 5;
	float area;
	float pi=3.1428;
	
	const int superScriptTwo = 253; //ascii value of super script two


	wchar_t bar[2];
    bar[0] = 178;
    bar[1] = 0;
    // wprintf(L"%ls\n", bar);
	
	area = pi*radius*radius;
	
	wprintf(L"Area of circle of radius %dcm is: %.3f cm%ls\n",radius,area,bar);

	
	
	return 0;
}
