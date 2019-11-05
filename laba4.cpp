#include <iostream>
#include <cstdlib>
#include <ctime>
#define K 5
using namespace std;

int main()
{
	srand(time(0));
	char a[K];
	bool isUnique;
	int sum = 0;
	for(int i = 0; i < K; i++){
		a[i] = rand() %25 + 97;
		cout<<a[i];
	}
	for(int i = 0; i < K; i++){
		isUnique = true;
		for(int j = i+1; j < K; j++){
			if(a[i] == a[j]){
				isUnique = false;
				break;
			} 
		}
		if(isUnique){
			sum++;
		}
	}
	cout<<endl<<sum;
	return 0;
}
