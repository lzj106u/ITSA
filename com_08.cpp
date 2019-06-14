#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, e;
	int grade;
	cin >> a >> b >> c >> d >> e;
	grade = (a + b * 2 + c * 2 + d * 2) - (e * 2);
	if(grade >= 45){
		cout << "A" << endl;
	}
	else if(grade <= 44 && grade >= 35){
		cout << "B" << endl;
	}
	else if(grade <= 34 && grade >= 25){
		cout << "C" << endl;
	}
	else if(grade < 25){
		cout << "D" << endl;
	}
	return 0;
}
