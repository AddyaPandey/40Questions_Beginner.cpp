#include<iostream>
using namespace std;
int main() {
                                // while loop
int n;
cin>>n;

int i=2;
int count=1;

while(i<=n){
   
   int j=1;
   while(j<=n){
    cout<<count<<" ";
    count=count+1;
    j=j+1;

   }
i=i+1;

        }

}