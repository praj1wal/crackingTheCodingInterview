#include<bits/stdc++.h>
using namespace std;

void reverseString(char *s1){
    char *end=s1;
    char temp;
    if(s1){
        while(*end){
            end++;
        }
        end--;//bcoz of the null pointer
    }
    while (s1<end){
        temp=*s1;
        *s1=*end;
        *end=temp;
        *s1++;
        *end--;
    }
}

int main(){
    char s[20];
    cout<<"Enter the string:";
    gets(s);
    cout<<s<<endl;
    reverseString(s);
    cout<<s;
    return 0;
}