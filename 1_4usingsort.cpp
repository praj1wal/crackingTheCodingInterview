#include<bits/stdc++.h>
using namespace std;

string sortedString(string &s){
    sort(s.begin(),s.end());
    return s;
}

int main(){
    string s1,s2;
    cout<<"Enter the strings:";
    cin>>s1>>s2;
    if(sortedString(s1)==sortedString(s2)){
        cout<<"Both are anagrams";
    }
    else
    {
        cout<<"Not anagramns";
    }
    
    return 0;
}