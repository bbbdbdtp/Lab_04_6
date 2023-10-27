#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P, S;
	int n, k;
	P = 1;
	n = 1;
	while (n <= 20)
	{
		S = 0;
		k = n;
		while (k <= 20)
		{
			S += k * k;
			k++;
		}
		P *= 1 + sin(S) / 1 + cos(S);
		n++;
	}
	cout << P << endl;
	P = 1;
	n = 1;
	do
	{
		S = 0;
		k = n;
		do
		{
			S += k * k;
			k++;
		} while (k <= 20);
		P *= 1 + sin(S) / 1 + cos(S);
		n++;
	} while (n <= 20);
	cout << P << endl;
	P = 1;
	for (n = 1; n <= 20; n++)
	{
		S = 0;
		for (k = n; k <= 20; k++)
		{
			S += k * k;
		}
		P *= 1 + sin(S) / 1 + cos(S);
	}
	cout << P << endl;
	P = 1;
	for (n = 20; n >= 1; n--)
	{
		S = 0;
		for (k = n; k >= 1; k--)
		{
			S += k * k;
		}
		P *= 1 + sin(S) / 1 + cos(S);
	}
	cout << P << endl;
	return 0;
}