#include <iostream>
#include "fractions.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	fract a(1,2), b(1,2);
	double x;
	
	if(a<b == true)
		cout << "A is less than B";
	fract c = a/b;
	//c.print();
    cout<<c;
	x=a;
	cout<<endl<<x;	
	return 0;
}
