#include <iostream>
using namespace std;

int main(){
	int i, j, tmp;
	int a[3];
	for(i = 0; i < 3; i++){
		cin >> a[i];
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(a[i] < a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	cout << a[2] << ">" << a[1] << ">" << a[0] << endl;
	return 0;
}
