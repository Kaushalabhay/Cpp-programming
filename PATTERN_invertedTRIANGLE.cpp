#include <iostream>

using namespace std ;

int main(){
    int n , m ;
    cout << "ENTER THE VALUE OF NUMER OF ROWS : ";
    cin >> n;
    cout << "ENTER THE VALUE OF NUMER OF COLUMNS : ";
    cin >> m;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= (m - i) + 1 ; j++){
            cout << "*";
        }
        cout << endl ;
    }
}