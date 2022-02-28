#include<iostream>
#include<string>

using namespace std;

bool iskPeriodic(string txt, int x)
{
	int n = txt.size();
	if (x > n)
	{
		cout << "period < 0" << endl;
		return false;
	}
	if ((n % x) != 0)
	{
		cout << "ostatok ne 0 " << x << endl;
		return false;
	}
	int j = x;
	int i = 0;
	while (n>j)
	{
		if(txt[j] != txt[i])
		{
			cout << "the string is not a multiple of " << x << endl;
			return false;
		}
		j++;
		i++;
	}
	cout << "the string is a multiple of " << x << endl;
	return true;
}

int main()
{
	int x = 3;
	int y = 6;
	int z = 2;
	int p = 20;
	string txt = "abcabcabcabc";
	cout << iskPeriodic(txt, x) << endl;
	cout << iskPeriodic(txt, y) << endl;
	cout << iskPeriodic(txt, z) << endl;
	cout << iskPeriodic(txt, p) << endl;
	return 0;
}