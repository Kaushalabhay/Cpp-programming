#include<iostream>

using namespace std;

int main()
{
    int $number ;
    char _ch;
    
    cout << "ENTER A NUMBER TO CHECK ITS ABSOLUTE VALUE : "<< endl;
    cin >> $number;

    if($number >= 0)
    {
        cout << "ABSOLUTE VALUE OF THE GIVEN POSITIVE NUMBER IS NUMBER IT-SELF: " << $number << endl;
    }
    else
    {
        cout <<  "ABSOLUTE VALUE OF THE GIVEN NEGATIVE NUMBER IS NEGATIVE OF THE SAME NUMBER : " <<  $number*(-1);
    }

    return 0;

}