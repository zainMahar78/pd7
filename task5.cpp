#include<iostream>
using namespace std;
bool prime(int);
main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
   bool result=prime(num);
   cout<<result;
}
bool prime(int num){
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        
    {
        return false;
    }

        return true;
    }
}