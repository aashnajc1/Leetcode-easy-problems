class Solution {
public:
    bool checkvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                return true;
            }
            else{
                return false;
            }
    }
    string reverseVowels(string s) {
        int a = 0;
        int b = s.size()-1;
        while(a<b){
            if(checkvowel(s[a]) && checkvowel(s[b])){
                swap(s[a],s[b]);
                a++;
                b--;
            }
            else if(checkvowel(s[a]) && !checkvowel(s[b])){
                b--;
            }
            else{
                a++;
            }
        }
        return s;
    }
};
