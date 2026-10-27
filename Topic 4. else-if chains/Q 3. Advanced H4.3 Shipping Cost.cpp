#include <iostream>
using namespace std ;
int main()
{
	int weight,shipping ;
	cout << "Enter the Weight in kg : " << endl;
	cin >> weight;
	if (weight > 0)
	{
		if (weight < 2 )
			shipping = 30 ;
		else if (weight < 6 )
			shipping = 50 ;
		else if (weight < 11 )
			shipping = 80 ;
		else 
			shipping = 80 + (weight - 10 ) * 10;
		cout << "Shipping : " << shipping << " EGP" << endl;
	}
	else 
		cout << "Invalid Weight" << endl ;
	return 0;
}