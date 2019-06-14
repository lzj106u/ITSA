#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int i;
	int a, b;
	int result;
	cin >> a >> b;
	if(a < b){
		for(i = a; i <= b; i++){
			result += i;
		}
	}
	else if(a > b){
		for(i = b; i <= a; i++){
			result += i;
		}
	}
	else{
		cout << a << endl;
		return 0;
	}
	cout << result << endl;
	return 0;
}
