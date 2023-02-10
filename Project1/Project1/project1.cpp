#include <iostream>
using namespace std;
int main() {
	double A;
	double B;
	cin >> A;
	cin >> B;
	cout << fixed;
	cout.precision(9);
	cout << double(A / B);
}