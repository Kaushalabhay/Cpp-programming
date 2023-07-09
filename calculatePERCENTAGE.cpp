#include<iostream>                        //SIMPLE INTEREST  =  (PRT)/100

using namespace std ;

int main()
{
    float maths = 89 ;
    float chemistry = 63 ;
    float physics = 73 ;
    float english = 80 ;
    float PE = 100 ;

    // cout << "ENTER MARKS OF PHYSICAL EDUCATION\n" << "PE = ";
    // cin >> PE ;
    // cout << PE ;

    float percentage;
    
    percentage = (maths + chemistry + physics + english + PE)/5.0;
    cout << percentage << endl << endl ;
   

    return 0;    


}