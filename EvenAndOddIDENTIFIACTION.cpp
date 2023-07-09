#include<iostream>

using namespace std;

int main()
{
    int number ;

    cout << "ENTER A NUMBER TO CHECK WEATHER IT IS 'EVEN' OR 'ODD': "<< endl;
    cin >> number;

    if( number % 2 == 0)
    {
        cout << "ENTERED NUMBER IS EVEN " << endl;
    }
    else
    {
        cout << "entered number is odd ";
    }

}