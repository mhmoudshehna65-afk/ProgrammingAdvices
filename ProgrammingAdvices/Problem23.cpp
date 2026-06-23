#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
const int SizeArr = 100;
int ReadPositiveNum(string);
int ReadNumInRange(string,int,int);
void PrintElementsArr(int arr[SizeArr], int Length);
int RandomNumber(int From, int To);
void FillArrayElements(int[SizeArr],int &);

int ReadNumInRange(string Message, int From, int To)
{
	int Num = 0;
	do {
		cout << Message;
		cin >> Num;

	} while (Num<From || Num>To);

	return Num ;


}
int ReadPositiveNum(string Message)
{
	int N = 0;
	do {
		cout << Message;
		cin >> N;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "wrong plz enter num: ";
				cin >> N;
		}
	} while (N < 0);
	return N;

}
void FillArrayElements(int arr[SizeArr],int &Length)
{
	
	for (int i = 0; i < Length; i++)
	{
		arr[i] = RandomNumber(1, 100);
}

}
int RandomNumber(int From, int To)
{
	

	int RandNum = rand() % (To - From + 1) + From;
	
	return RandNum; // 110 
}
void PrintElementsArr(int arr[SizeArr], int Length)
{

	cout << "ArrayElements:\n";
	for (int i = 0; i < Length; i++)
		cout << arr[i] << " ";
	cout << endl;


}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int LengthArrOut = ReadNumInRange("How many Elements do you want to enter for random numbers from 1 to 100: ", 1, 100);
	FillArrayElements(arr,LengthArrOut);
	
	PrintElementsArr(arr, LengthArrOut);



	return 0;

}