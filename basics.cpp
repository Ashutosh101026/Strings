#include<iostream>
#include<string>
using namespace std;

int main(){
    // string x ="abc is a student";
    // cout<<x<<endl;

    // string s;  // spaces not considered
    // cin>>s;
    // cout<<s;

    // string st = "koi bhi sentence";

    //     string s;
    //     getline(cin,s); // spaces considered
    //     cout<<s;

    // string s="xyz";
    // cout<<s[0]<<endl;
    // s[0]='a';
    // cout<<s<<endl;
    // cout<<s.size()<<endl;

    // looping
    // string s="abc is a student";
    // int n=s.size();
    // // for(int i=0;i<n;i++){
    // //     cout<<s[i];
    // // }
    // for(char ch:s){ // for each loop
    //     cout<<ch;
    // }

    // built in functions
    string s1="abc";
    string s2="xyz";
    string s3=s1+s2;
    cout<<s3<<endl; //concatination

    string s="abc";
    cout<<s+"4"<<endl;

    string s4="abc";
    s4 += " is a student";
    cout<<s4<<endl;
}