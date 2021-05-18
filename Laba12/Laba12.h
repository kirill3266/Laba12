#ifndef Laba12
#define Laba12 

#include <iostream>
using namespace std;

class IntModulo
{
private:
	unsigned modulo;
	int val;
public:
	IntModulo& operator=(const IntModulo& right);
	IntModulo operator+(const IntModulo& right) const;
	IntModulo operator-(const IntModulo& right) const;
	IntModulo operator*(const IntModulo& right) const;
	friend ostream& operator<<(ostream& out, const IntModulo& right);
	IntModulo();
	IntModulo(int n);
	IntModulo(const IntModulo& right);
	void input();
	void output();
	int getVal();
	void setVal(int n);
	~IntModulo();
};

#endif // !Laba12

