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

	int arr2[26];
	for(int x = 0; x < 26; x++){
	cout << "Enter in first lottery numbers: ";
	cin >> arr2[x];
	}

	int arr3[26];
	for(int x = 0; x < 26; x++){
		cout << "Enter in second lottery numbers: ";
		cin >> arr3[x];
	}

	cout << "********************************************" << endl;

	int arr4[26];
	for(int x = 0; x < 26; x++){
		cout << "Enter in third lottery numbers: ";
		cin >> arr4[x];
	}

	cout << "********************************************" << endl;

	int arr5[26];
	for(int x = 0; x < 26; x++){
		cout << "Enter in fourth lottery numbers: ";
		cin >> arr5[x];
	}

	cout << "********************************************" << endl;

	int arr6[26];
	for(int x = 0; x < 26; x++){
		cout << "Enter in fifth lottery numbers: ";
		cin >> arr6[x];
	}

	cout << "********************************************" << endl;

	int arr7[26];
	for(int x = 0; x < 26; x++){
		cout << "Enter in mega numbers: ";
		cin >> arr7[x];
	}

	cout << "********************************************" << endl;

	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	int sum5 = 0;
	int sum6 = 0;
	int sum7 = 0;

	for(int i = 0; i < 26; i++)
	{
		 sum2 = sum2 + arr2[i];
		 sum3 = sum3 + arr3[i];
		 sum4 = sum4 + arr4[i];
		 sum5 = sum5 + arr5[i];
		 sum6 = sum6 + arr6[i];
		 sum7 = sum7 + arr7[i];
	}
	cout << endl;
	cout << "Here are the average lottery numbers: " << endl;
	cout << sum2/26 << " " << sum3/26 << " " << sum4/26 << " " << sum5/26 << " " << sum6/26 << " " << sum7/26 << endl;

	return 0;
}



