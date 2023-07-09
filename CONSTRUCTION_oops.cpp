#include<iostream>

using namespace std ;

class A{
    private :

    int a ; 

    public :

    A()
    {
        a = 2 ;
    }
    A(int x){
         a = x ;
    }
    
    void output(){
        cout << a << endl; 
    }
    };
    int main()
{
    A obj1;
    A obj2(20) ;
    cout << "obj1 = ";
    obj1.output();
    cout << "obj2 = ";
    obj2.output();
    return 0 ;

}