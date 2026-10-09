#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    string s="";
    while(n!=0){
        int lastdegit=n%10;
        char ch =lastdegit+48;
        s.push_back(ch);
        n /= 10;
    }
    // reverse
    int i=0,j=s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s<<endl;
}