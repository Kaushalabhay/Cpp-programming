#include<iostream>

using namespace std ;

class sample {

    private : 

    int a ;
    int b ; 
     
    public : 

    void value(){
        a = 2 ;
        b = 8 ;

    }

    friend float mean(sample s);

};

float mean(sample s){
    return float(s.a + s.b)/2.0;
}
int main(){
    sample y ;
    y.value();
    cout << "MEAN VALUE : " << mean(y);
    return 0 ; 

}
