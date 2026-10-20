#include <iostream>
using namespace std;
int main()
{
	float length, width;
	cout << "Enter the length : ";
	cin >> length;
	cout << "Enter the width : ";
	cin >> width;
	cout << "Area of rectangle is : " << length * width;
	cout << "\nPerimeter of rectangle is : " << 2 * (length + width);
	return 0;
}