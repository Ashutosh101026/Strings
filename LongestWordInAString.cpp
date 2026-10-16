#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="AArjun is a smartest boy";

    int n = s.length();
    int i=0,j=0,maxlen=0;
    while(j<n){
        if(s[j]!=' ') j++;
        else{
            int len=j-i;
            if(len>maxlen) maxlen=len;
            // jump to next word starting
            i=j; // i and j are both at space
            while(i<n && s[i]==' '){
                i++;
                j++;
            }

        }

    }
    int len = j-i;
    if(len>maxlen) maxlen=len;
    cout<<maxlen<<endl;
}