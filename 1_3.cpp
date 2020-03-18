#include<bits/stdc++.h>
using namespace std;

char* removeDuplicate(char* s1,int n){
    int index=0,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(s1[i]==s1[j]){
                break;
            }
        }
        if(i==j){
            s1[index]=s1[i];
            index++;
        }
    }
    return s1;
}
int main(){
    char s[1000];
    cout<<"Enter the string:";
    cin>>s;
    int n=sizeof(s)/sizeof(s[0]);
    cout<<s<<endl;
    cout<<"String with no duplicates:";
    cout<<removeDuplicate(s,n);
    return 0;
}