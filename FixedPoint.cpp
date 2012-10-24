/*CS2014 Lab13
 
 Name: David Byrne
 Student ID: 09068783
 
*/

#include "FixedPoint.h"

FixedPoint :: FixedPoint(){
	data = 0;
	dec = 4;
}

FixedPoint :: FixedPoint(int num){
	
	data = num;
	dec = 4;
}

FixedPoint FixedPoint::operator=(const FixedPoint rhs) {
	FixedPoint result = *this;
	
    // Only do assignment if RHS is a different object from this.
    if (this != &rhs) {
		// Deallocate, allocate new space, copy values...
		result.data = rhs.data;
    }
	
    return result;
}

FixedPoint FixedPoint::operator+(const FixedPoint rhs) {
	FixedPoint result = *this;
	
    result.data = result.data + rhs.data;
	
    return result;
}

FixedPoint FixedPoint::operator-(const FixedPoint rhs) {
	FixedPoint result = *this;
	
    result.data = result.data - rhs.data;
	
    return result;
}

FixedPoint FixedPoint::operator*(const FixedPoint rhs) {
	FixedPoint result = *this;
	
    result.data = result.data * rhs.data;
	
    return result;
}

FixedPoint FixedPoint::operator/(const FixedPoint rhs) {
	FixedPoint result = *this;
	
    result.data = result.data / rhs.data;
	
    return result;
}

istream &operator>>(istream &input, FixedPoint &num){
	
	input >> num.data;
	
	return input;
}

ostream &operator<<(ostream &output, const FixedPoint &num){
	
	output << num.data;
	
	return output;
}

bool FixedPoint::operator==(const FixedPoint rhs) {
	bool result;
	FixedPoint operand = *this;
	
    result = operand.data == rhs.data;
	
    return result;
}

bool FixedPoint::operator!=(const FixedPoint rhs) {
	bool result;
	FixedPoint operand = *this;
	
    result = operand.data != rhs.data;
	
    return result;
}

bool FixedPoint::operator<=(const FixedPoint rhs) {
	bool result;
	FixedPoint operand = *this;
	
    result = operand.data <= rhs.data;
	
    return result;
}

bool FixedPoint::operator>=(const FixedPoint rhs) {
	bool result;
	FixedPoint operand = *this;
	
    result = operand.data >= rhs.data;
	
    return result;
}

bool FixedPoint::operator>(const FixedPoint rhs) {
	bool result;
	FixedPoint operand = *this;
	
    result = operand.data > rhs.data;
    
    return result;
}

bool FixedPoint::operator<(const FixedPoint rhs) {
	bool result;
	FixedPoint operand = *this;
	
    result = operand.data < rhs.data;
	
    return result;
}