#include <iostream>
using namespace std;

int main(){
	int seconds;
	int day, hour, minute;
	cin >> seconds;
	if(seconds >= 24 * 3600){
		day = seconds / (24 * 3600);
		seconds %= (24 * 3600);
	}
	if(seconds >= 3600){
		hour = seconds / 3600;
		seconds %= 3600;
	}
	if(seconds >= 60){
		minute = seconds / 60;
		seconds %= 60;
	}
	cout << day << " days" << endl;
	cout << hour << " hours" << endl;
	cout << minute << " minutes" << endl;
	cout << seconds << " seconds" << endl;
	return 0;
}
