//find the sum of n natural numbers ,where n is the input

#include<iostream>

using namespace std ;

int main()
{
    int i = 1;
    int n;
    int term = 0 ;
    int sum = 0;

    cout << "ENTER THE VALUE OF N : ";
    cin >> n ;
    
    while(i <= n){
        term = term + i ;
        sum = term ;
       i++;
    }
      
   
    cout << "SUM OF N NATURAL NUMBER IS = " << sum ;



}