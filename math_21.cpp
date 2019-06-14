#include <iostream>
using namespace std;

long recur(long number){
	if(number > 0){
		return number * recur(number - 1);
	}
	else{
		return 1;
	}
}

int main(){
	long number;
	cin >> number;
	number = recur(number);
	cout << number << endl;
	return 0;
}
