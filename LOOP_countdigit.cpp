#include<iostream>

using namespace std ;

int main()
{
    int n ;
    cout << "ENTER THE NUMBER FOR WHICH YOU WANT TO CALCULATE NO. OF DIGITS = ";
    cin >> n;

    int digit = 0;

    while(n > 0){
        digit++;
        n = n/10 ; 
    }
    cout << "NUMBER OF DIGIT IN N = " << digit ;
    return 0 ;
}