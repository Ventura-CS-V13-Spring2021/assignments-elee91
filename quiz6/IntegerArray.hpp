#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H

class IntegerArray
{
private:
	static const int N = 10;
	int numbers[N];
	int length = 0;
public:
	int getLength(void) const;
	void printAll(void) const;
	void fillUp(void);
	void sortArray(int flag);
	void getPrimenumber(void) const;
};
#endif