#include<iostream>
using namespace std;
int main(){

    string pw;
    string correctpw="okokpw";
    cout<<"Enter password: ";
    cin>>pw;
    do{
        cout<<"Enter password: ";
        cin>>pw;
    }while(pw!=correctpw);
    cout<<"correct password ! ! ";
    return 0;
}