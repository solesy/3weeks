#include<iostream>
#include<stdio.h>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<string>
#include<algorithm>
#include<cassert>
#include<memory.h>
#include<cmath>
using namespace std;
class Array {
protected:
	int* data; //배열
	int len; //배열의 크기
public:
	Array(int size);
	~Array();

	int length() const;

	int& operator[](int i);
	int operator[](int i)const;

	void print();
};
