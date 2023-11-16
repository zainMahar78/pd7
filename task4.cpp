#include<iostream>
using namespace std;
int dots (int);
main(){
    int num;
    cout<<"Enter the number of Triangle: ";
    cin>>num;
    int result=dots(num);
    cout<<"Dots in the Triangle: "<<result;
}
int dots(int num){
    int i=1;
    int sum =0;
    while(i<=num){
        sum=sum+i;
        i++;
    }
    return sum;
}