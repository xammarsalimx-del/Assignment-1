#include <iostream>
using namespace std ;
int main()
{
	int distance , fare ;
	cout << "Enter the distance in KM : ";
	cin >> distance;
	if (distance < 4 )
		fare = 25;
	else 
		fare = 10 + ( distance * 4 );
	cout << "Fare : " << fare << " EGP" << endl ;
	return 0;
}