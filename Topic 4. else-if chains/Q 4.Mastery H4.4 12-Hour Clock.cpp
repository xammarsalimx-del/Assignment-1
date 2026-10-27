#include <iostream>
#include <string>
using namespace std ;
int main()
{
	string state ;
	int user_h , h , min;
	cout << "Enter the hours : " << endl ;
	cin >> user_h ;

	if (user_h >= 0 && user_h < 24 )
	{
		cout << "Enter the minutes : " << endl ;
		cin >> min;
		if (min > 0 && min < 60)
		{
			if (user_h == 0)
			{
				h = 12 ;
				state = "AM";
			}
			else if (user_h < 13 )
			{
				h = user_h;
				state = "AM";
			}
			else 
			{
				h = user_h - 12;
				state = "PM";
			}
			cout << user_h << " : " << min << " = " << h << " : " << min << " " << state << endl;
		}
		else 
			cout << "Invalid Minutes" << endl ;
		
	}
	else 
		cout << "Invalid Hours" << endl ;
}