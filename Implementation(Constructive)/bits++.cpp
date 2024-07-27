#include<bits/stdc++.h>
using namespace std;

int main(){
   int X = 0;//initial value is given zero
   int t; // no. of test cases
   cin>>t;
   string s;
   while(t){
    cin>>s;
    if(s == "++X" || s == "X++"){
        X++;
    }
    else{
        X--;
    }
    t--;
   }
   cout<<X;

    return 0;
}