#pragma once

class Array
{
	double *arr;
	int n;

public:
	Array();
	Array(int);
	Array(const Array&);
	void PutIn();
	void printArr();
	~Array();
};