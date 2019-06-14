#include <iostream>
using namespace std;

int main(){
	int i = 35;
	int number;
	cin >> number;
	while(i <= number){
		cout << i;
		i += 35;
		if(i < number){
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}
