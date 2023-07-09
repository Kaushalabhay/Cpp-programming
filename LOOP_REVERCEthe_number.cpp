#include<iostream>

using namespace std;

int main(){
    int n ;
    cout << "ENTER THE NUMBER TO FIND ITS REVERCE = ";
    cin >> n ;

    int revercednumber = 0 ;
    while(n>0){
        int lastnumber = n % 10;
        revercednumber = ( revercednumber * 10 ) + lastnumber ;
        n = n / 10;
    }
    cout << revercednumber;
    return 0 ;
}