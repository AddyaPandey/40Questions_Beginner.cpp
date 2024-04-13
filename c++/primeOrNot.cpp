#include<iostream>
using namespace std;
int main() {
                                // while loop
int n;
cin>>n;

int i=2;

while(i<n){
               //divde ho gaya toh not prime
if(n%i==0){
   cout<<"not a prime";
}
else{
   cout<<"it is a prime number";
}

i=i+1;

        }

}