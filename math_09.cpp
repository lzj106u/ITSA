#include <iostream>
using namespace std;

int main(){
	int i;
	int num = 1;
	int times;
	cin >> times;
	for(i = 0; i < times; i++){
		num *= 2;
	}
	if(times < 31){
		cout << num << endl;
	}
	else{
		cout << "Value of more than 31" << endl;
	}
	return 0;
}
