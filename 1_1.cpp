#include<bits/stdc++.h>
using namespace std;

bool areCharUnique(string s){
    int checker=0;
    for(int i=0;i<s.length();i++){
        int index=s[i]-'a';

        if((checker & (1<<index))>0){
            return false;
        }
        checker=checker|(1<<index);
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter the String:";
    cin>>s;
    if(areCharUnique(s)){
        cout<<"all chars unique";
    }
    else{
        cout<<"some chars not unique";
    }
    return 0;
}