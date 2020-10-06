#include"Array.h"
class RangeArray : public Array {
private:
	int base, end;
public:
	RangeArray(int _base, int _end);
	~RangeArray();

	int& operator[](int i);
	int operator[](int i)const;
	int baseValue() { return base; }
	int endValue() { return end; }
};
