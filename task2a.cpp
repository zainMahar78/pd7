#include<iostream>
using namespace std;
void stars(int);
void diamond(int);
main(){
    int rowsize;
    cout<<"Enter desired number of rows: ";
    cin>>rowsize;
    stars(rowsize);
    diamond(rowsize);
}
void stars(int rowsize){
    for(int row=1; row<=rowsize; row++){
        for(int col=1; col<=1; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void diamond(int rowsize){
    for(int row=rowsize; row>=1; row--){
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}