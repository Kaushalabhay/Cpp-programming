#include <iostream>

using namespace std ;

class rectangle
{
    private :

    int l ;
    int b ;

    public : 

    void getdata()
    {
        cout << "ENTER THE VALUE OF L : ";
        cin >> l ;
        cout << "ENTER THE VALUE OF B : ";
        cin >> b ;
    }

    void area()
    {
        int area ;
        area = l * b ;
        cout << "THE AREA IS : " << area;
    }


};

int main()
{
    rectangle r1;
    r1.getdata();
    r1.area();
    return 0;
}

