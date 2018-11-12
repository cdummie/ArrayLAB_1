#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
	Array a(5);
	a.PutIn();
	Array b = a;
	a.printArr();
	b.printArr();
	getchar();
	getchar();
}