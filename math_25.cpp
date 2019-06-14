#include <iostream>
using namespace std;

int main(){
	int i, result = 0;
	int number;
	cin >> number;
	for(i = 1; 3 * i <= number; i++){
		result += 3 * i;
	}
	cout << result << endl;
	return 0;
}
