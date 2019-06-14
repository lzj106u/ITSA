#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double hour;
	double salary;
	double result = 0;
	cin >> hour >> salary;
	if(hour <= 60.0){
		result += salary * hour;
	}
	else if(hour >= 61.0 && hour <= 120.0){
		result += salary * 60.0 + (hour - 60.0) * salary * 1.33;
	}
	else if(hour >= 121){
		result += salary * 60.0 + 60.0 * salary * 1.33 + (hour - 120) * salary * 1.66;
	}
	cout << fixed << setprecision(1) << result << endl;
	return 0;
}
