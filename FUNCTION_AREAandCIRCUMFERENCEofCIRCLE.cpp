#include<iostream>
using namespace std;

float area(float radius);
float circumference(float radius);

int main(){
    int radius;

    cout << "ENTER THE VALUE OF RADIUS : ";
    cin >> radius;
    
    area(radius);
    cout << endl;
    circumference(radius);
    
}

float area(float radius){
    float pie = 3.14;
    float AreaOfCircle = pie * radius * radius ; 
    cout << AreaOfCircle ;
    return 0 ;
}

float circumference(float radius){
    float pie = 3.14;
    float circumference = 2 * pie * radius ;
    cout << circumference;

    return 0;
}
