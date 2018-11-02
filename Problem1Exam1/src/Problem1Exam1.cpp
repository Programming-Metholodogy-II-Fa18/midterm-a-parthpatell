//============================================================================
// Name        : Problem1Exam1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

void swap(int *a, int*b)
{ int t = *a;
*a = *b;
*b = t;
	}
void partition(int arr[], int low, int high)
{
int pivot = arr[high];
int i = low -1;
	for(int j = low; j <= high-1; j++)
	{ if (arr[j]<= pivot)
	{
		i++;
		swap(&arr[i], &arr[j]);

	}

	}
	swap(&arr[i+1], &arr[high]);
				return (i+1);
	}
// ExamSort(int arr[], int size)
void QuickSort(int arr[], int low, int high)
{
	if (low<high)
{ int p = partition(arr, low,high);
QuickSort(arr, low, p-1);
QuickSort(arr, p+1, high);
	}
}
//Funtion to print Array
void PrintArray(int arr[], int n)
{ for (int i = 0; i<n ; i++)
{
	cout << arr[i] <<" " << "\n";
}

}
int main(){
	int arr[] = {15,9,60,44,12,1,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	QuickSort(0, n, n-1);
	cout << "The Sorted Array\n";
	PrintArray(arr, n);


}
