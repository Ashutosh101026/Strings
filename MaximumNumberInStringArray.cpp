#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<string> arr={"0013","0123","940","2190","0023"};
    string max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(stoi(arr[i])>stoi(max)){
            max=arr[i];

        }
    }
    cout<<max<<endl;
    
}