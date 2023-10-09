# include <iostream>
using namespace std;

int main(){
    const double pi = 3.142857;
    double rad;
    cout<<"Enter the radius of circle(r)"<<endl;
    cin>>rad;
    double area = pi*(rad*rad);
    cout<<"The area of circle of radius "<<rad<<" is: "<<area<<endl;
    return 0;

}