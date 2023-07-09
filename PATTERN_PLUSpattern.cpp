#include<iostream>

using namespace std ;

int main(){
    int n ;
    cout << "ENTER THE VALUE OF N : ";
    cin >> n;
    int m ;
    cout << "ENTER THE VALUE OF M : ";
    cin >> m;

    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
           if(i == 3|| j == 3){
           cout << "*";}else{
            cout<<" ";
           }
        }
        cout << endl;
    }

    return 0;
}