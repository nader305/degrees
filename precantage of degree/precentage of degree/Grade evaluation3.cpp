#include<iostream>
using namespace std;
int main() {
	float grade;
	cout << "Enter your grade:\n";
	cin >> grade;
	(grade >= 0 && grade <= 100) ? (grade >= 85 && grade <= 100) ? cout << "=========\nExcellent\n" : 
		(grade >= 75 && grade <= 84) ? cout << "=========\nVery good\n" : 
		(grade >= 65 && grade <= 74) ? cout << "=========\nGood\n" : 
		(grade >= 50 && grade <= 64) ? cout << "=========\nPass\n" :
		cout << "=========\nFail\n" : 
		cout << "=========\nEnter avalid grade\n";
	return 0;
}