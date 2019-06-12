#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double c;
	double result;
	cin >> c;
	result = c * 9 / 5 + 32;
	result *= 100;
	if(((int)result % 10) >= 5){
		result += 5;
	}
	result /= 100;
	cout << fixed << setprecision(1) << result << endl;
	return 0;
}
