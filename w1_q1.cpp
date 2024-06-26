#include<bits/stdc++.h>
using namespace std;
string q1(int n,string& s){
    int U=0;//for counting number of facing up coins
    for(char u : s){
        if(u=='U')
        U++;
    }
    if(U%2==1){
        return "YES";
    }
    else return "NO";
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<q1(n,s)<<endl;
    }
    return 0;
}