#include<iostream>

using namespace std;

int square(int number);

int main(){
    int number;
    int n;
    cout << "ENTER THE NATURAL NUMBER TILL WHICH YOU WANT TO FIND THE SQUARE : ";
    cin >> n ;

    for (int number = 1; number <= n; number++)
    {
        square(number);
    }
    
}

int square(int number){
    int square = number * number ;
 
    cout << square;
    cout << endl;
    return 0;

}