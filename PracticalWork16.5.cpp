// PracticalWork16.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <ctime>


const int n = 5;

int main()
{
	int array[n][n];
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) array[i][j] = i + j;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) std::cout << array[i][j] << " ";
		std::cout << "\n";
	
	}

	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	std::cout << "\n" << "Day today: " << buf.tm_mday << "\n";
	
	int Index = buf.tm_mday % n;
	std::cout << "Index: " << Index << "\n";
	int Sum = 0;

	for (int j = 0; j < n; ++j) 
	{
		Sum += array[Index][j];
	}
	std::cout << "Sum of elements in a row: " << Sum << "\n";
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
