#include"Array.h"
Array::Array(int size) {
	if (size <= 0) {
		cout << "Array size error!" << endl;
		exit(1);
	}
	else {
		data = new int[size];
		len = size;
	}
}
Array::~Array() {
	delete[] data;
	data = NULL;
}
//배열의 크기를 반환한다.
int Array::length() const {
	return len;
}
//return reference
int& Array:: operator[](int i) {
	static int tmp;
	if (i < len && i >= 0) return data[i];
	cout << "Array bound error!" << endl;
	return tmp;
}
//return data[i]
int Array:: operator[](int i)const {
	if (i < len && i >= 0) return data[i];
	else {
		cout << "Array bound error!" << endl;
		return 0;
	}
}
void Array::print() {
	cout << "[ ";
	for (int i = 0; i < len; ++i)
		cout << data[i] << " ";
	cout << "]" << endl;
}
