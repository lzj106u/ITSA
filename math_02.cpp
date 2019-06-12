#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int weight, height;
	cin >> weight >> height;
	cout << fixed << setprecision(1) << weight * height / 2.0 << endl;
	return 0;
}
