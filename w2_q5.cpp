#include<bits/stdc++.h>
using namespace std;
vector<int>asteroidCollision(vector<int>&asteroids){
        vector<int>v;
        for(int ast : asteroids){
            if(ast>0){
                v.push_back(ast);
            }
            else{
                while(!v.empty() && v.back()>0 && v.back()<-ast){
                    v.pop_back();
                }
                if(!v.empty() && v.back()==-ast){
                    v.pop_back();
                }
                else if(v.empty() || v.back()<0){
                    v.push_back(ast);
                }
            }
        }
        return v;
    
}
int main(){
    int n;
    cin>>n;
     vector<int> asteroids(n);
         for (int i = 0; i < n; ++i) {
        cin >> asteroids[i];
    }
    vector<int> result = asteroidCollision(asteroids);
    for (int num : result) {
        cout << " " << num;
    }
    cout << endl;
}