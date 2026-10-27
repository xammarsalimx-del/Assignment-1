#include <iostream>
using namespace std ;
int main()
{
	int num ;
	cout << "Enter the number : " << endl;
	cin >> num;
	if (num > 0 && num < 8 )
	{
		if (num == 1)
			cout << "Sunday" << endl ;
		else if (num == 2) 
			cout << "Monday" << endl ;
		else if (num == 3)
			cout << "Tuesday" << endl ;
		else if (num == 4 )
			cout << "Wednesday" << endl ;
		else if (num == 5)
			cout << "Thursday" << endl ;
		else if (num == 6)
			cout << "Friday" << endl ;
		else 
			cout << "Saturday" << endl ;
	} 
	else 
		cout << "Invalid day" << endl ;
	return 0 ;
}