#include<iostream>

using namespace std ;

class student_biodata
{
    private : 

        string name;
        int age;
        float height;
        int roll;

    public :

    void getdata()
    {
      cout << "ENTER THE NAME OF THE STUDENT : " << endl ;
      cin >> name ;

      cout << "ENTER THE AGE OF THE STUDENT : " << endl ;
      cin >> age ;

      cout << "ENTER THE HEIGHT OF THE STUDENT : " << endl ;
      cin >> height ;

      cout << "ENTER THE ROLL NO OF THE STUDENT : " << endl ;
      cin >> roll ;

    }
    
    void display()
    {
        cout << "THE NAME OF THE STUDENT IS : " << name <<endl ;
        cout << "THE AGE OF THE STUDENT IS : " <<age <<endl ;
        cout << "THE HEIGHT OF THE STUDENT IS  : " << height <<endl ;
        cout <<"THE ROLL NO OF THE STUDENT IS : " << roll <<endl ;
    }


};

int main()
{
   student_biodata s1;
   s1.getdata();
   s1.display();

    return 0 ;
}