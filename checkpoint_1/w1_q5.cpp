#include<bits/stdc++.h>
using namespace std;
long long length_of_chocolate(long long L){
      long long i= pow((L+1),2)+1;
      return i;
}
int main(){
      int j;
      cin>>j;
      while(j--){
            long long L,ans;
            cin>>L;
            ans=length_of_chocolate(L);
            cout<<ans<<endl;
}
}