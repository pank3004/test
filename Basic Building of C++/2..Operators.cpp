#include<iostream>
using namespace std;
int main()
{
    int a=13,b=17;
//Arithmatic operatores

    cout<<"a+b="<<a+b<<endl;
    cout<<"a-b="<<a-b<<endl;
    cout<<"a*b="<<a*b<<endl;
    cout<<"a/b="<<a/b<<endl;   // complete division
    cout<<"a%b="<<a%b<<endl;   // remainder

//Relational Operators----> ans. in boolian ex. true(1) or false(0)

    if (a==b){
        cout<<"if a is equal to b then this execute"<<endl;
    }

    if (a!=b){
        cout<<"if a is not equal to b then this execute"<<endl;
    }

    if (a>b){
        cout<<"if a is grater then b ,then this execute"<<endl;
    }

      if (a<b){
        cout<<"if a is less then b ,then it will be execute"<<endl;
    }
       if (a>=b){
        cout<<"if a is grater then b or a is equal to b ,then it will be execute"<<endl;
    }

       if (a<=b){
        cout<<"if a is less then b or a is equal to b,then it will be execute"<<endl;
    }

//Logical Operators: 

    if (a>10 && a%2==0){
        cout<<"if both conditon are true , then it will be execute"<<endl;
    }

    
    if (a>10 || a%2==0){
        cout<<"min one cond. must be True , then it will be execute"<<endl;
    }

//Asignment Operators:-
    int c;

    c=a+b;     // the value of a+b is asigning in c
    cout<<"the value of c is: "<<c<<endl;
    
    c+=1;      // means c=c+1
    cout<<"the value of c is: "<<c<<endl;

    c*=2;      // c=c*2
    cout<<"the value of c is: "<<c<<endl;

    c/=3;     // c=c/3
    cout<<"the value of c is: "<<c<<endl;

    c%=5;      // c=c%5   
    cout<<"the value of c is: "<<c<<endl;

//Bitwise Operators: 



}