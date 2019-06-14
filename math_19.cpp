#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int minutes;
	double expense = 0.0;
	cin >> minutes;
	if(minutes <= 800){
		expense = minutes * 0.9;
	}
	else if(minutes > 800 && minutes < 1500){
		expense = minutes * 0.9 * 0.9;
	}
	else if(minutes >= 1500){
		expense = minutes * 0.9 * 0.79;
	}
	cout << fixed << setprecision(1) << expense << endl;
	return 0;
}
