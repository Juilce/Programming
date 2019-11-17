#include <iostream>
#include <iomanip>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{	srand(time(0));
	int min, max;
	int n = 10;
	int *a = new int [10];
	for( int i = 0; i < n; i++){
		cin >> a[i];
	}
	for( int i = 0; i < n; i++){
	cout << a[i] <<" ";
	}
	max=a[0];
	min=a[0];
	for (int i = 1; i < 10; i++){
		if(a[i] > max){
			max = a[i];
			}
		cout <<"MAX= "<<max<<endl;	
		} 
	for (int i = 1; i < 10; i++){
		if (a[i] < min){
			min = a[i];
		} 
		cout <<"MIN= "<<min<<endl;
	}
		delete [] a;
		cout << endl;
		return 0;
}
