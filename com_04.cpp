#include <iostream>
using namespace std;

int main(){
	int grade;
	cin >> grade;
	if(grade >= 0 && grade <= 100){
		if(grade >= 90 && grade <= 100){
			cout << "A" << endl;
		}
		else if(grade >= 80 && grade <= 89){
			cout << "B" << endl;
		}
		else if(grade >= 70 && grade <= 79){
			cout << "C" << endl;
		}
		else if(grade >= 60 && grade <= 69){
			cout << "D" << endl;
		}
		else if(grade < 60){
			cout << "E" << endl;
		}
	}
	else{
		cout << "error" << endl;
	}
	return 0;
}
