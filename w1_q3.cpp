#include<bits/stdc++.h>
using namespace std;
string decimalToTernary(int n){
    string ternary="";
    while(n>0){
        if (n==0) return "0";
        ternary+=(n%3)+'0';
        n/=3;
    }
    reverse(ternary.begin(),ternary.end());
    return ternary;
}
int ternaryToDecimal(string &ternary){
    int decimal=0;
    int base=1;
    int l=ternary.length();
    for(int i=l-1;i>=0;i--){
        decimal+=(ternary[i]-'0')*base;
        base*=3;
    }
    return decimal;
}
int q4(int a,int c){
    string a_ternary=decimalToTernary(a);
    string c_ternary=decimalToTernary(c);
    while (a_ternary.length()<c_ternary.length()) a_ternary='0'+a_ternary;
    while (c_ternary.length()<a_ternary.length()) c_ternary='0'+c_ternary;
    string b_ternary="";
    for (int i = 0; i < a_ternary.length(); ++i) {
        int a_digit = a_ternary[i] - '0';
        int c_digit = c_ternary[i] - '0';
        int b_digit = (c_digit - a_digit + 3) % 3;
        b_ternary+=b_digit+'0';
    }
    return ternaryToDecimal(b_ternary);
}
int main(){
    int a,c;
    cin>>a>>c;
    cout<<q4(a,c)<<endl;
    return 0;
}