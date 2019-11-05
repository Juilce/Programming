#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int fact = 1, n = 15;
	double x, Y, S, a, b, h;
	a = 0.2;
	b = 0.8;
	h = (b - a)/10;
	x = a;
	S = 0;
	cout.precision(5);
	cout << setw(11) << left <<"x" << setw(11) << left << " S(x)"
		 << setw(11) << left << "  Y(x)" << endl;
	do{
		Y = (((x+1)/sqrt(x)) * sinh( pow(x,1./2) ) - cosh( pow(x,1./2) ))/4;
		S = 0;
		fact = 1;
		for(int i = 1; i <= n; i++){
			fact *= (2*i * (2*i + 1));
			S += pow(i,2) * (pow(x,i)) / fact;
		}
		cout << setw(11) << left << x <<"|"<< setw(11) << left << S
			 <<"|"<< setw(11) << left << Y <<endl;
		x += h;
	}while(x <= b + h / 2);
	
	
	

	return 0;
}
