#include <iostream>
#include <cstdlib>
using namespace std;

int cmp(const void *a, const void *b){
	return (*(int*)a - *(int*)b);
}

int main(){
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	qsort(a, 3, sizeof(int), cmp);
	if(((a[0] + a[1]) > a[2]) && (abs(a[0] - a[1]) < a[2])){
		if((a[0] * a[0] + a[1] * a[1]) == (a[2] * a[2])){
			cout << "Right Triangle" << endl;
		}
		else if((a[0] * a[0] + a[1] * a[1]) > (a[2] * a[2])){
			cout << "Acute Triangle" << endl;
		}
		else if((a[0] * a[0] + a[1] * a[1]) < (a[2] * a[2])){
			cout << "Obtuse Triangle" << endl;
		}
	}
	else{
		cout << "Not Triangle" << endl;
	}
	return 0;
}
