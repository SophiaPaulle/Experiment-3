#include <iostream>
#include <iomanip>
#include <conio.h>


using namespace std;

int main()
{
	int a, b, size;
	char input[10];

	cout << "Input Elements in Array: ";
		cin >> input;

	for (a = 0; input[a] != '\0'; a++)
	{
		size = a;
	}

	b = a - 1;
	a = 0;

	while (input[a] > input[b])
	{
		char temp = input[a];
		input[a] = input[b];
		input[b] = temp;
		a++;
		b--;
	}

	cout << "Reversed Order: ";
	for (a = 0; a <= size; a++)
	{
		cout << input[a];
	}

	cout << " " << endl;
	cout << "Array Size: " << size + 1;

	getch();
	return 0;
}
