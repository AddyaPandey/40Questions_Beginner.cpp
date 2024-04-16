// print this pattern
//12345
//1234
//123
//12
//1
//12
//123
//1234
//12345

#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

int row=1;
while(row<=n) {

int column=1;
while(column<=n) {

cout<<column;
column=column+1;

}
cout<<endl;
row=row+1;

}
} 