#include <iostream>
using namespace std;

int main(){
	int dollar;
	int NT_10 = 0, NT_5 = 0, NT_1 = 0;
	cin >> dollar;
	while(dollar >= 10){
		dollar -= 10;
		NT_10++;
	}
	while(dollar >= 5){
		dollar -=  5;
		NT_5++;
	}
	while(dollar >= 1){
		dollar--;
		NT_1++;
	}
	cout << "NT10=" << NT_10 << endl;
	cout << "NT5=" << NT_5 << endl;
	cout << "NT1=" << NT_1 << endl;
	return 0;
}
