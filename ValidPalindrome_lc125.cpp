class Solution {
public:
    bool notvalid(char ch){
        if(ch>=65 && ch<=90) return false;
        else if(ch>=97 && ch<=122) return false;
        else if(ch>=48 && ch<=57) return false;
        else return true;
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            char c =s[i],d=s[j];
            if(c>=65 && c<=90) c+=32;
            if(d>=65 && d<=90) d+=32;
            if(notvalid(c)) i++;
            else if(notvalid(d)) j--;
            else{
                if(c!=d) return false;
                i++;
                j--;
            }
            
        }
        return true;
        
    }
};