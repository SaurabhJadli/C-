//Simple Calculator which can calculate(+,-,*,/) of 2 operant using C++
#include<iostream>
using namespace std;

int main(){
char o;
float n1,n2;

cout<<"Enter Operator , whose calculation u want : ";
cin>>o;

cout << "\nEnter 1st Operant : ";
cin>>n1;
cout<<"Enter 2nd Operator : ";
cin>>n2;
cout<<"Result : ";
switch(o){
case '+':
cout<<n1+n2;
break;

case '-':
cout<<n1-n2;
break;

case '*':
cout<<n1*n2;
break;

case '/':
cout<<n1/n2;
break;

default:
cout<<"Error !! Operator is Not +,-,*,/";
break;
        }
        int a;
cout<<"\n\nDo u want todo another Calculation ? Reply(y/n) : ";
cin>>a;
cout<<"\n\n\n";
return 0;

}
