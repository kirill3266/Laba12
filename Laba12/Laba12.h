#ifndef Laba12
#define Laba12 

#include <iostream>
using namespace std;

class IntModulo
{
private:
	unsigned modulo;
public:
	IntModulo& operator=(const IntModulo& right);
	IntModulo& operator+(const IntModulo& right);
	IntModulo& operator-(const IntModulo& right);
	IntModulo& operator*(const IntModulo& right);
	friend ostream& operator<<(ostream& out, const IntModulo& right);
	IntModulo();
	IntModulo(int n);
	~IntModulo();
	void input();
	void output();
	unsigned getModulo();
	unsigned setModulo(int n);
};

#endif // !Laba12

