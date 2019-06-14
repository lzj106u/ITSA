#include <iostream>
using namespace std;

int main(){
	int number;
	int result = 0;
	int i;
	cin >> number;
	if(number == 1){
		cout << number << " = " << number << endl;
	}
	else{
		for(i = 1; i < number; i++){
			result += i;
			cout << i << " + ";
		}
		result += number;
		cout << number << " = " << result << endl;
	}
	return 0;
}
