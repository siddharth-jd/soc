#include <bits/stdc++.h>
using namespace std;
string mergeAlternatively(){
    string word1,word2;
    cin>>word1>>word2;
    string word;
    int length1=word1.length();
    int length2=word2.length();
    int maxlength=max(length1,length2);
    for(int i=0;i<maxlength;i++){
        if(i<length1){
            word.push_back(word1[i]);
        }
        if(i<length2){
            word.push_back(word2[i]);
        }

    }
    return word;
}
int main(){
    cout<<mergeAlternatively()<<endl;
    return 0;
}