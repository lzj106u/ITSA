#include <iostream>
using namespace std;

int main(){
	int i;
	int number;
	cin >> number;
	for(i = 1; i < number; i++){
		if((number % i) == 0){
			cout << i << " ";
		}
	}
	cout << number << endl;
	return 0;
}
