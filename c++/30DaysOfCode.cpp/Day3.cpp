#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    
    if(age >= 18) {
        cout << "You are an Adult!";
    }
    else {
        cout << "Not an Adult!";
    }
    return 0;
}