#include <iostream>

using namespace std;

//#define DEBUG false

void prime(int num1,int num2)
{
	
	for (int i = num1; i <= num2; i++)
	{
		bool prime = true;
		for (int p = 2; p < i; p++)
		{
			if (i%p == 0)
			{
				prime = false;
			}
		}

		if (prime)
		{
			cout << i << " is prime" << endl;
		}
	}
}


void lowestmult(int num1,int num2)
{

	int num1c = num1;
	int num2c = num2;

	while(num1 != num2)
	{
		if(num1<num2) 
		{
			num1 += num1c;
		}
		else
		{
			num2 += num2c;
		}
	}
	cout << "The LCM is: " << num1 << endl;
}


int main()
{
	int a = 0;
	int b = 0;
	cout << "pick the lower number" << endl;
	cin >> a;
	cout << "pick the higher number" << endl;
	cin >> b;
	prime(a, b);
	lowestmult(a,b);

	return 0;


}