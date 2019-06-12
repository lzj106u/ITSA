#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int up, down, height;
	cin >> up >> down >> height;
	cout << "Trapezoid area:" << fixed << setprecision(1) << (up + down) * height / 2.0 << endl;
	return 0;
}
