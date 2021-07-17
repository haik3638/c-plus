#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void printArray(int *arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

// int main()
// {
// 	int iArr[] = { 3, 2, 5, 1, 7, 10, 32 };
// 	printArray(iArr, sizeof(iArr) / sizeof(int));
	
// 	system("pause");
// 	return 0;
// }
int * createAnInteger(int value = 0)
{
	return new int(value);
}

int main()
{
	int *pInt = createAnInteger(10);
	int k;
	cout << "Print immediately:   " << *pInt << endl;
	cin>>k;
	cout << "After a few seconds: " << *pInt << endl;
	
	system("pause");
	return 0;
}