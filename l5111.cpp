#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int max, imax, jmax;
	int **a = new int* [5];
	for (int i = 0; i < 5; i++){
		a[i] = new int [5];
	}
	max = a[0][0];
	imax = jmax = 0;
	for (int i= 0; i < 5; i++){
	    for (int j = 0; j < 5; j++) {
	    a[i][j] = rand()%100 + 1; 
		cout << a[i][j] << "\t";
      }
      cout << endl;
    } 
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			if(a[i][j] > max){
				max = a[i][j];
				imax = i;
				imax = j;
			}
		}	

}
	cout << "IMAX= " << imax << endl;
	cout << "JMAX= " << jmax << endl;

	
	for(int i = 0; i < 5; i++)
	delete []a[i];
	return 0;
}
