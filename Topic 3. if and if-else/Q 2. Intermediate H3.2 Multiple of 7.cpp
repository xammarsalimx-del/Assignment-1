#include <iostream>;
using namespace std ;
int main()
{
	int num ;
	cout << "Enter the number : ";
	cin >> num;
	if (num % 7 == 0)
		cout << num << " is a multiple of 7 " << endl ;
	else 
		cout << num << " is not a multiple of 7" << endl ;
	return 0 ;
}