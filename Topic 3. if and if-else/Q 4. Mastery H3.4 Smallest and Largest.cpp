#include <iostream>
using namespace std ;
int main()
{
	int num1 , num2 , num3 , num4 , large , small ;
	cout << "Enter the four number : " ;
	cin >> num1 >> num2 >> num3 >> num4 ;
	if (num1 > num2)
	{
		large = num1 ;
		small = num2;
	}
	if (num2 > num1)
	{
		large = num2;
		small = num1;
	}

	if (num3 > large)
		large = num3;
	if (num4 > large )
		large = num4;
	if (num3 < small)
		small = num3 ;
	if (num4 < small)
		small = num4;
	cout << "ٍٍSmallest : " << small << endl ;
	cout << "Largest : " << large << endl ;
	return 0;
}