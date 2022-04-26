#include <iostream>
#include <iostream>
#include <math.h>
using namespace std;
double mf(double a, double b, double n)
{
	if (n < b)
		return ((n + a) / -b) + sqrt(pow(sin(a), 2) - cos(n));
	else if (n == b)
		return pow(b, 2) + tan(n * a);
	else
		return pow(b, 3) + n * pow(a, 2);
}
double nf(double a, double b)
{
	if (a >= b)
		return pow(a - b, 1.0 / 3);
	else
		return pow(a, 2) + ((a - b) / sin(a * b));;
}
int main()
{
	double a = 4.8, b = -7.9, m, n;
	n = nf(a, b);
	m = mf(a, b, n);
	cout << "Var 1" << endl;
	cout << " a = " << a << "\n" << " b = " << b << "\n" << " m = " << m << "\n" << " n = " << n << " ";
}
