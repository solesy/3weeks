#include"RangeArray.h"
RangeArray::RangeArray(int _base, int _end) : Array(_end - _base + 1) {
	base = _base;
	end = _end;
}
RangeArray::~RangeArray() {
	delete[] data;
	data = NULL;
}
//overloading
int& RangeArray:: operator[](int i) {
	static int tmp;
	if (base <= i && i <= end) {
		int d = -base;
		i += d;
		return data[i];
	}
	cout << "Array bound error!" << endl;
	return tmp;
}
int RangeArray:: operator[](int i)const {
	if (base <= i && i <= end) {
		int d = -base;
		i += d;
		return data[i];
	}
	else {
		cout << "Array bound erroe!" << endl;
		return 0;
	}
}
