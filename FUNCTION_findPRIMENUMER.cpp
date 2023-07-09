#include<iostream>

using namespace std;

int find_primenumber(int a , int b);

int main(){
    int a ;
    cout << "ENTER THE VALUE OF A : ";
    cin >> a;
    int b ;
    cout << "ENTER THE VALUE OF B : ";
    cin >> b;

    find_primenumber(a , b);


}

int find_primenumber(int a , int b){
    for(int i = a ; i <= b ; i++){
        if(b % i != 0){
            cout << i << endl;
        }
    
    }
    return 0 ;
}