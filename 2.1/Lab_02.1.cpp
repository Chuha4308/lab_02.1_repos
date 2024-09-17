#include<iostream> 
#include<cmath> 
using namespace std;
int main()
{
	double a;
	cout << "a = "; cin >> a;
	//double z1 = pow(((1 + a + pow(a, 2)) / (2 * a + pow(a, 2))) + 2 - ((1 - a + pow(a, 2)) / (2 * a - pow(a, 2))), -1) * (5 - 2 * pow(a, 2));
	double z2 = (4 - pow(a, 2)) / 2.0;
	//cout << "z1: " << z1 << endl;
	cout << "z2: " << z2 << endl;
	return 0;
}