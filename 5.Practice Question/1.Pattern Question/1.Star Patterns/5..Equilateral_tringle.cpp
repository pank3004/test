/*
             *
           * * * 
         * * * * *
       * * * * * * * 
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter n: ";
    cin>>n;
   
    for(i=1;i<=n;i++){
        for(j=1;j<=(2*n-1);j++){
         if(j>(n-i) && j<(n+i))   // if(j>=(n-i+1) && j<=(n+i-1)
         {
            cout<<"* ";
         }else{
            cout<<"  ";
         }
        
       }
       cout<<endl;
    }
    return 0;
}