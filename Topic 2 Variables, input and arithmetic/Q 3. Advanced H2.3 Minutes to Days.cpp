#include <iostream>
using namespace std ;
int main()
{
	int min_user, min , days, hours ;
	cout << "Enter the number of minutes : "<<endl ;
	cin >> min_user ;
	days = min_user / 1440 ;
	hours = (min_user % 1440 ) / 60;
	min = min_user % 60 ;
	cout << min_user << " Minutes = "<< days<< " days "<< hours << " h "<< min << " min "<< endl;
	return 0;
}