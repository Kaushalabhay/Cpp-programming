#include<iostream>

using namespace std ;

int main(){
  int n ;
  cout << "ENTER THE VALUE OF N : ";
  cin >> n ;

  for( int i = 1 ; i <= n ; i++ ){
    for(int j = i ; j <= n ; j++){
        cout << j ;
    }
    for(int j = 1 ; j <= i - 1 ; j++){
        cout << j ;

    }
    cout << endl;
  }
}