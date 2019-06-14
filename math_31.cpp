#include <iostream>
using namespace std;

int main(){
	int i, result = 0;
	int number;
	cin >> number;
	for(i = 1; i <= number; i++){
		if(((i % 2) == 0) && ((i % 3) == 0) && ((i % 12) != 0)){
			result += i;
		}
	}
	cout << result << endl;
	return 0;
}
