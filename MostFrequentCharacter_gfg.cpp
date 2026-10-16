class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int n=s.length();
        vector<int>freq(26,0);
        for(char ch:s){
            int idx=ch-97;
            freq[idx]++;
        }
        int mx=0;
        for(int i=0;i<26;i++){
            mx=max(freq[i],mx);
            
        }
        for(int i=0;i<26;i++){
            if(freq[i]==mx){
                return (char)(i+97);
            }
            
        }
        return s[0];
    }
};