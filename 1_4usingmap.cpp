#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cout<<"Enter the strings:";
    cin>>s1>>s2;
    unordered_map<char,int>count;
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
    }
    for(int i=0;i<s1.length();i++){
        count[s2[i]]--;
    }
    int flag=0;
    unordered_map<char,int>:: iterator i;
    for(i=count.begin();i!=count.end();i++){
        if(i->second!=0){
            cout<<"Not anagrams";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Anagrams";
    }
    return 0;
}