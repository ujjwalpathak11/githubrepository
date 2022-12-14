							RECURSIVE METHOD
#include <iostream>
using namespace std;

int fact(int num)
{
	if (num == 0 || num == 1)
		return 1;
	return num * fact(num - 1);
}

int main()
{
	int value = 8;
	cout <<"value is "<<value<< " and it's factorial is : " << fact(value) << endl;
	return 0;
}
							ITERATION METHOD
#include <iostream>
using namespace std;

int fact(int num)
{
	int a = 1,i;
	for (i = 2; i <= num; i++)
		a *= i;
	return a;
}
int main()
{
	int value =9;
    cout <<"value is "<<value<< " and it's factorial is : " << fact(value) << endl;
    return 0;
}
