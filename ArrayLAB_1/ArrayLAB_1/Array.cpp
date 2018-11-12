#include <iostream>
#include "Array.h"
using namespace std;

Array::Array()
{
	n = 0;
}

Array::Array(int n)
{
	this->n = n;
	arr = new double[n];
}

Array::Array(const Array& a)
{
	n = a.n;
	arr = new double[n];
	arr = a.arr;
}

void Array::PutIn()
{
	cout << "Unesite elemente niza:\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
}

void Array::printArr()
{
	cout << "\n";
	for (int i = 0; i < n; i++)
		cout << arr[i]<<"\t";
	
}

Array::~Array()
{
	delete[n] arr;
}