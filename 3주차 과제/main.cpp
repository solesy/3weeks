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
class Str {
private:
	char* str;//string의 내용
	int len;//string의 길이
public:
	Str(int length) {
		str = new char[length + 1];
		len = length;
	}
	Str(const char* neyong) {
		int length = strlen(neyong);
		len = length;
		str = new char[length + 1];
		strcpy(str, neyong);
	}
	~Str() {
		delete[] str;
		str = NULL;
	}
	//str의 길이를 반환한다.
	int length(void) const { return len; }
	//str의 내용을 반환한다.
	char* contents() const { return str; }
	//a의 내용과 strcmp를 실행한 결과를 반환한다.
	int compare(const Str& a) { return strcmp(str, a.contents()); }
	//a의 내용과 strcmp를 실행한 결과를 반환한다.
	int compare(const char* a) { return strcmp(str, a); }
	//operator overloading
	Str& operator=(const char* a) {
		int newLen = strlen(a);
		delete[] str;//error
		str = new char[newLen + 2];
		strcpy(str, a);
		len = newLen;
		return *this;
	}
	Str& operator=(const Str& a) {
		int newLen = a.length();
		delete[] str;
		str = new char[newLen + 1];
		strcpy(str, a.contents());
		len = newLen;
		return *this;
	}
};
int main() {
	Str a("I'm a girl");
	cout << a.contents();
	a = "I'm a boy\n";
	cout << a.contents();
	cout << a.compare("I'm a a") << endl;
	Str b("이상윤");
	a = b;
	cout << a.contents() << endl;
}
