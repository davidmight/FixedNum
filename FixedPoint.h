/*CS2014 Lab13
 
 Name: David Byrne
 Student ID: 09068783
 
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

using namespace std;

class FixedPoint {
private:
	int data;
	int dec;
public:
	FixedPoint();
	FixedPoint(int num);
	FixedPoint operator=(const FixedPoint rhs);
	FixedPoint operator+(const FixedPoint rhs);
	FixedPoint operator-(const FixedPoint rhs);
	FixedPoint operator*(const FixedPoint rhs);
	FixedPoint operator/(const FixedPoint rhs);
	bool operator==(const FixedPoint rhs);
	bool operator!=(const FixedPoint rhs);
	bool operator<=(const FixedPoint rhs);
	bool operator>=(const FixedPoint rhs);
	bool operator>(const FixedPoint rhs);
	bool operator<(const FixedPoint rhs);
	friend ostream & operator << (ostream & out, const FixedPoint & r);
	friend istream & operator >> (istream & in, FixedPoint & r);
};
