// lab6.3_iter.cpp : This file contains the 'main' function. Program execution begins and ends there.

using namespace std;
#include <iostream>
#include <iomanip>

template <typename T>
void CreateArray(T* a, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++) {
		a[i] = Low + rand() % (High - Low + 1);
	}
}

void CreateArray(int* a, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++) {
		a[i] = Low + rand() % (High - Low + 1);
	}
}
template <typename T>
void PrintArray(T* a, const int size) {
	cout << " a[" << size << "] = " << "{";
	for (int i = 0; i < size; i++) {
		cout << setw(4) << a[i];
	}
	cout << " }" << endl;
}
void PrintArray(int* a, const int size) {
	cout << " a[" << size << "] = " << "{";
	for (int i = 0; i < size; i++) {
		cout << setw(4) << a[i];
	}
	cout << " }" << endl;
}
template <typename T>
T SumParn(T* a, const int size) {
	T s = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 == 0) {
			s += a[i];
		}
	}
	return s;
}
int SumParn(int* a, const int size) {
	int s = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 == 0) {
			s += a[i];
		}
	}
	return s;
}

int main()
{
    srand((unsigned)time(NULL));
	const int n=7;
	int a[n];
	int Low, High;
	cout << "Enter low value "; cin >> Low;
	cout << endl;
	cout << "Enter high value "; cin >> High;
	
	
	CreateArray<int>(a, n, Low, High); //шабл
	//CreateArray(a, n, Low, High);
	PrintArray<int>(a, n);  //шабл
	//PrintArray(a, n);
	cout << " SumParn = " << SumParn<int>(a,n)<<endl;  //шабл
	//cout << " SumParn = " << SumParn(a, n) << endl;
    return 0;
}

