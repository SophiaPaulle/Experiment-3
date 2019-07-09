#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
int main ()
{
    int values[15], a, max, min;
    float sum = 0;
   
    for (a = 0; a < 15; a++)
	{
        cout << "Input values: ";
        cin >> values[a]; 
    }
        
    max = values[0];
    for (a = 0; a < 15; a++)
    {
        if (max < values[a])
            max = values[a];
    }
    
    min = values[0];
    for (a = 0; a < 15; a++)
    {
        if (min > values[a])
            min = values[a];
    }
    
    for (a = 0; a < 15; a++)
    {
        sum = sum + values[a];
    }
    
    cout << endl << "Largest Integer: " << max << endl;
    cout << "Smallest Integer: " << min << endl;
    cout << "Sum: " << sum << endl;
    cout << "Ave: " << sum/15 << endl;
    
    getch ();
    return 0;
}
