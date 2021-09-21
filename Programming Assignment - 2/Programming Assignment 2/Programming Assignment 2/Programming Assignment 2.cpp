
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

//define and input variables that will not change such as cost to produce cheese, profit per unit, and how much cheese in a container
float cost = 4.12;
float profit = 1.45;
float hold = 2.76;


int main() {
	cout << std::setw(20) << std::setfill('*') << std::setw(64) << "\n";
	string s0 = "Welcome to my Cheesy Program";
	cout << setfill('*') << setw(44) << s0 << setw(20) << "\n";
	cout << std::setw(20) << std::setfill('*') << std::setw(64) << "\n";

	//Variables
	int container;
	float input;
	float totalcost;
	float totalprofit;

	//program will ask for the user
	cout << " " << endl; cout << "Please enter the number of kilograms of cheese produced:";
	cin >> input;

	container = ceil(input / 2.76);
	totalcost = container * cost;
	totalprofit = container * profit;
	string s1 = "The number of containers to hold the cheese is:";

	//OUTPUT

	cout << setfill('.') << setw(10) << left << s1 << setw(19) << right << container << setfill('.') << endl;
	string s2 = "The cost of producing " + to_string(container) + " container(s) of cheese is:";
	cout << setw(10) << fixed << setprecision(2) << left << s2 << setw(11) << right << '$' << totalcost << endl;
	string s3 = "The profit from producing " + to_string(container) + " container(s) of cheese is:";
	cout << setw(10) << fixed << setprecision(2) << left << s3 << setw(7) << right << '$' << totalprofit << endl;
	int ch = std::cin.get();
}