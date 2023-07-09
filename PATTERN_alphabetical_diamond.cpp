#include<iostream>

using namespace std ;

int main()
{
    int n ;
    cout << "ENTER THE VALUE OF N : ";
    cin >> n ;

    for(int i = 0 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout << " ";

        }
        for(int k = 0 ; k < (2 * i) - 1 ; k++){
            char ch = (char)('A' + k);
            cout << ch ;
            }
            cout << endl ;
    }
    for(int j = n + 1 ; j <= (2 * n) - 1 ; j++){
        for(int l = 0 ; l < j - n ; l++){
            cout << " ";
        }
    for(int m = 0 ; m < (2 *((2 * n) - j)) - 1 ; m++ ){
            char ch = (char)('A' + m );
            cout << ch ;
        }
        cout << endl ;
        
    }
        
        //   for(int i = 0 ; i <= n ; i++){
//         for(int j = 1 ; j <= n-i ; j++){
//             cout << " ";

//         }
//         for(int k = 0 ; k < (2 * i) - 1 ; k++){
//             char ch = (char)('A' + k);
//             cout << ch ;
//         }
//         cout << endl;

//     }
// }
//       for(int p = n+1 ; p <= 2*n - 1 ; p++){
//          for(int j = 0 ; j < p - n ; j++ ){
//             cout << " ";
//          }
//          for(int k = 0 ; k < 2*(2*n - p)- 1 ; k++){
//             char ch = (char)('A' + k);
//             cout << ch ;

//          }
//          cout << endl;
//       }
}

