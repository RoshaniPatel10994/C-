#include <iostream>
using namespace std;



int main() {
	cout << "******************************************************************" << endl;
	cout << "****************Welcome to my first program***********************" << endl;
	cout <<	"Convert a large number of seconds into hours, minutes and seconds." << endl;
	cout << "******************************************************************" << endl;
	cout << " " << endl;
	int input;
	int hour;
	int minute;
	int second;
	cout << "Please enter a large number of seconds:";
	cin >> input;
	hour = (input - input % 3600) / 3600;
	minute = ((input % 3600) - (input % 3600) % 60) / 60;
	second = input - hour * 3600 - minute * 60;
	cout << "The number of hours in the number is: " << hour << endl;
	cout << "The number of minutes in the number is: " << minute << endl;
	cout << "The number of seconds in the number is: " << second << endl;
	cout << "Press any key to continue . . .";
	cin.ignore();
	cin.get();
}