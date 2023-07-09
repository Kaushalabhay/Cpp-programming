#include<iostream>

using namespace std ;

int main(){
    int n ;
    cout << "ENTER THE NUMBER TO CALCULATE THE SUM OF : ";
    cin >> n ;

    int sum = 0 ;

    while(n > 0){
        int lastnumber = n%10;
        sum = sum + lastnumber ;
        n = n/10;
    }
    cout << sum ;
    return 0 ;
}