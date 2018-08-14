#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void reweto(vector<int> & vec)
{
	for (int i = 2; i<sqrt(vec.size()); i++)
	{
		if (vec[i]>0)
		{
			for (int j = i*i; j <= vec.size(); j += i)
			{
				vec[j] = -1;
			}
		}

	}
}
int main()
{
	setlocale(0, "");
	vector<int> mass;
	int num = 0,item=0;

	cout << "Enter your limit"<<endl;
	cin >> num;

	for (int i = 0; i <= num; i++)
	{
		mass.push_back(i);
	}

	reweto(mass);
	
	cout << "All prime numbers up to your limit: ";

	for (int i = 2; i < mass.size(); i++)
		if (mass[i] > 0)
			cout << mass[i] << " ";
	system("pause");
	return 0;
}