#include<bits/stdc++.h>
using namespace std;
bool q6(vector<int>& array){
    map<int,int> mp;
    for(auto x:array){
        mp[x]++;
    }
    vector<int> v;
    for (auto x:mp){
        v.push_back(x.second);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==v[i+1]){return false;
        }
    }
    return true;
}
int main(){
    vector<int> v;
    int num;
    while(cin>>num){
        v.push_back(num);
    }
    cin.clear();
    if( q6(v)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}