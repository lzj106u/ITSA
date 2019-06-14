#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	if((num % 2) == 1){
		cout << "odd" << endl;
	}
	else if((num % 2) == 0){
		cout << "even" << endl;
	}
	return 0;
}
