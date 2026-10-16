class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;

        while (i >= 0) {
            while (i >= 0 && s[i] == ' ')
                i--;

            string word = "";

            while (i >= 0 && s[i] != ' ') {
                word += s[i];
                i--;
            }

            reverse(word.begin(), word.end());

            if (word != "") {
                if (ans != "")
                    ans += " ";

                ans += word;
            }
        }

        return ans;
    }
};