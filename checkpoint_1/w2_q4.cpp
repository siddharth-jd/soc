#include<bits/stdc++.h>
using namespace std;
int q4(vector<char>& chars) {
        int i = 0, k = 0;
        while(i<chars.size()){
            int count = 1, j = i+1;
            while(j<chars.size() && chars[j] == chars[i] ){
                count++; j++;
            }
            chars[k++] = chars[i];
            if(count>1){
                string cnt = to_string(count);
                for(char ch : cnt)
                    chars[k++] = ch;
            }
            i = j; 
        }
        return k;
    }
    int main(){
        vector<char> c;
        char ch;
    while(cin>>ch){
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
            c.push_back(ch);
        }
        else{break;}
    }
    cin.clear();
        cout<<q4(c);
    }