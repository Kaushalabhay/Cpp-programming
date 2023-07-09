#include<iostream>          // 1 - 2 + 3 - 4 + 5 - 6 + 7 - 8 + n

using namespace std ;

int main()
{
    int n;
    cout << "ENTER THE NUMBER N TILL WHICH YOU WANT TO CONTINUE SERIES AND FIND SUM OF = ";
    cin >> n ;

    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
        if(i%2 == 0 ){
            sum = sum - i ;
        }else{
            sum = sum + i ; 
        }
    }
    cout << sum ;
}