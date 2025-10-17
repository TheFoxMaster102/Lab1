// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdbool.h>
int main()
{
	int a, b, c;
	bool output;
	
	while (true){
		printf("Side A:");
		a = scanf_s("%d", &a);
		printf_s("Side B:");
		b = scanf_s("%d", &b);
		printf("Side C:");
		c = scanf_s("%d", &c);
		if (a > b && a > c)
		{
			output = a < b + c;
		}
		else if (b > c)
		{
			output = b < a + c;
		}
		else
		{
			output = b < a + b;
		}
		if (output) {
			printf("Can form triangle");
		}
		else
		{
			printf("Cannot form triangle");
		}
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
