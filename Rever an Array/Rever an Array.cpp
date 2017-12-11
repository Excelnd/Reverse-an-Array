// Rever an Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int i, j, n, temp, arr[25];
	cout << "Enter The Number ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << "Enter the Number of elements of array= ";
		cin >> arr[i];
	}

	j = i - 1;
	for (i = 0; i < j; i++)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		j--;
	}

	cout << "\nAfter Reverse of Array Elements: ";
	for (i = 0; i < n; i++)
	{
		cout << "\t" << arr[i] << endl;
	}



    return 0;
}

