#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "-" << b << "=" << a - b << endl;	
	if(a < 0 && b < 0){
		cout << a << "/" << b << "=" << a / b + 1 << "..." << a - b * ((a / b) + 1) << endl;
	}
	else if(a > 0){
		cout << a << "/" << b << "=" << a / b << "..." << a % b << endl;
	}
	else if(a < 0 && b > 0){
		cout << a << "/" << b << "=" << a / b - 1 << "..." << a - b * ((a / b) - 1) << endl;
	}
	return 0;
}
