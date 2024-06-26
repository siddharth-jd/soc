#include<bits/stdc++.h>
using namespace std;
void swap_characters(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
       string a,b; 
       cin >>a>>b;
       char p=a[0];
       a[0]=b[0];
       b[0]=p;
       cout<<a<<" "<<b<<endl;
    }
}
int main(){
    swap_characters();
    return 0;
}