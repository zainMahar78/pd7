#include<iostream>
using namespace std;
void diamond(int rowsize);
main(){
    int rowsize;
    cout<<"Enter the number of rows: ";
    cin>>rowsize;
    diamond(rowsize);
}
void diamond(int rowsize){
    for(int i=rowsize; i>=1; i--){
        for(int j=1; j<=i; j++)
       { cout<<j;}
        cout<<endl;
}
}
