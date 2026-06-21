#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
#include<limits>
using namespace std;
const int SizeArr = 100;

int ReadPositiveNum(string);
void ReadArray(int[100],int);
int CheckFreqElement(int[100], int CheckFreq,int Length);
void PrintAllElementsArr(int[100], int);


void ReadArray(int arr[100],int Length)
{
	
	cout << "Enter the elements of array:\n";
	for (int i = 0; i < Length; i++)
	{
		cout << "Element[" << i + 1 << "]: ";
			cin >> arr[i];		
	}
	
}
int CheckFreqElement(int arr[100],int Length,int CheckFreq)
{
	int Freq= 0,Remainder=0;
	for (int i = 0; i < Length; i++)
	{
		if (arr[i] == CheckFreq)
			Freq++;
	}
	return Freq;


}
void PrintAllElementsArr(int arr[100],int Length)
{

	cout << "Orginal Array:\n";
	for (int i = 0; i < Length; i++)
		cout << arr[i] << " ";
	cout << endl ;


}
int ReadPositiveNum(string Message)
{
	int Num;
	do {

		cout << Message;
		cin >> Num;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Wrong! Plz Enter Num:\n";
			cin >> Num;

		}

	} while (Num < 0);
	return Num;

}


int main()
{
	int arr[100];
	int Length = ReadPositiveNum("Enter num of array elements: ");
	 ReadArray(arr,Length);
	PrintAllElementsArr(arr,Length);
	int CheckNum = ReadPositiveNum("Enter Num you want to check: ");
	cout << CheckNum << "is repeated " << CheckFreqElement(arr,Length,CheckNum) << " time/s\n";

	return 0;
}