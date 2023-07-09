#include<iostream>

using namespace std;

int VotingEligibility(int age);

int main(){
    int age ;
    cout << "ENTER YOUR AGE : ";
    cin >> age;
    cout << "THANK YOU FOR YOUR CONCERN... NOW WE'LL CHECK YOUR ELIGIBILTY FOR VOTING (: ";
    cout << endl;
    if(age>=19){
        VotingEligibility(age);
    }else{
        cout << "YOU ARE NOT ELIGIBLE FOR VOTING ):";
    }

}

int VotingEligibility(int age){
    cout << "YOU ARE ELIGIBLE FOR VOTING";

    return 0;
}