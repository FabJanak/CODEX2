#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    
    if (age < 13) {
        cout << "You are a child." << endl;
    } 
    else if (age < 18) {
        cout << "You are a teenager." << endl;
    }
    else if (age < 65) {
        cout << "You are an adult." << endl;
    }
    else {
        cout << "You are a senior citizen." << endl;
    }
    
    return 0;
}