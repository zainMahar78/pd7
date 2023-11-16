#include<iostream>
using namespace std;
int isPrime(int);

main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    int result=isPrime(num);
    cout<<result;
}
int isPrime(int num){
    int count =0;
    for(int i=2; i<=num; i++){
        if(num%i==0){
        count++;}}
        if(count==1){
            return num;
        }
        if(count>1) 
      {  return num;
    }
}