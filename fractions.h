#include <iostream>

using namespace std;

class fract{
	int num, den;
	public:
		fract();
		fract(int x, int y);
		void print();
		operator double()  const{
		        return (double)num/(double)den;
				};
		bool operator<(fract &b);
		bool operator>(fract &b);
		bool operator==(fract &b);
		bool operator!=(fract &b);
		bool operator>=(fract &b);
		bool operator<=(fract &b);
		fract operator+(fract &b);
		fract operator-(fract &b);
		fract operator*(fract &b);
		fract operator/(fract &b);
		friend ostream& operator<<(ostream &stream,const fract &v);

};
