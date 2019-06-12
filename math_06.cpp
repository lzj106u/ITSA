#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double num;
	cin >> num;
	double result = num * 1.6;
	result = result * 100;
	if(((int)result % 10) >= 5){
		result += 5;
	}
	result = result / 100;
	cout << fixed << setprecision(1) << result << endl;
	return 0;
}
