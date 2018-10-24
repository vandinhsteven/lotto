/*
 * main.cpp
 *
 *  Created on: Oct 23, 2018
 *      Author: Steven
 */


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
	cout << "Lottery numbers: " << endl;

	srand(time(NULL));
	int num1 = (rand() % 25) + 1;
	int num2 = (rand() % 36) + 10;
	int num3 = (rand() % 36) + 20;
	int num4 = (rand() % 36) + 30;
	int num5 = (rand() % 36) + 45;
	int mega = (rand() % 20) + 1;

	cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << " " << mega << endl;
	cout << endl;

	int arr[5], t;

	arr[0] = num1;
	arr[1] = num2;
	arr[2] = num3;
	arr[3] = num4;
	arr[4] = num5;

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			if(arr[j] > arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}

	cout << "The lottery numbers in ascending order are: " << endl;
	for (int y = 0; y < 5; y++)
	{
		cout << arr[y];
		cout << " ";
	}
	cout << mega;

	return 0;
}



