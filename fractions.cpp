#include <iostream>
#include "fractions.h"

using namespace std;

fract::fract(){
	num = 0;
	den = 1;
}

fract::fract(int x, int y){
	num = x;
	den = y;
}

void fract::print(){
	cout << num << "/" << den;
}

bool fract::operator<(fract &b){
	double aa = double(num)/double(den);
	double bb = double(b.num)/double(b.den);
	if(aa<bb)
		return true;
	else
		return false;
}

bool fract::operator<=(fract &b){
	double aa = double(num)/double(den);
	double bb = double(b.num)/double(b.den);
	if(aa<=bb)
		return true;
	else
		return false;
}

bool fract::operator>(fract &b){
	double aa = double(num)/double(den);
	double bb = double(b.num)/double(b.den);
	if(aa>bb)
		return true;
	else
		return false;
}

bool fract::operator>=(fract &b){
	double aa = double(num)/double(den);
	double bb = double(b.num)/double(b.den);
	if(aa>=bb)
		return true;
	else
		return false;
}

bool fract::operator==(fract &b){
	double aa = double(num)/double(den);
	double bb = double(b.num)/double(b.den);
	if(aa==bb)
		return true;
	else
		return false;
}

bool fract::operator!=(fract &b){
	double aa = double(num)/double(den);
	double bb = double(b.num)/double(b.den);
	if(aa!=bb)
		return true;
	else
		return false;
}

fract fract::operator+(fract &b){
	double bb = double(den) * double(b.den);
	double aa = (bb/double(den) * double(num)) + (bb/double(b.den) * double(b.num));
	fract sum(aa,bb);
	return sum;
}

fract fract::operator-(fract &b){
	double bb = double(den) * double(b.den);
	double aa = (bb/double(den) * double(num)) - (bb/double(b.den) * double(b.num));
	fract diff(aa,bb);
	return diff;
}

fract fract::operator*(fract &b){
	double bb = double(den) * double(b.den);
	double aa = double(num) * double(b.num);
	fract sum(aa,bb);
	return sum;
}

fract fract::operator/(fract &b){
	double bb = double(den) * double(b.num);
	double aa = double(num) * double(b.den);
	fract quot(aa,bb);
	return quot;


ostream& operator<<(ostream &stream, const fract &v){
	stream << "(" << v.num << "/" << v.den << ")";
	return stream;
}

