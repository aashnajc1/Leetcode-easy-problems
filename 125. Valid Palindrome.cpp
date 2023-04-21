class Solution {
public:
    char tolowercase(char ch){
        char temp;
        if(ch>='a' && ch<='z'){
            return ch;
        }
        else{
            temp = ch - 'A' + 'a';
        }
        return temp;
    }
    bool isalphanumeric(char ch){
        if(ch >= 'a' && ch <= 'z') return true;
        if(ch >= 'A' && ch <= 'Z') return true;
        if(ch >= '0' && ch <= '9') return true;

        return false;
    }
    bool isPalindrome(string s) {
        int st = 0, e = s.length()-1;
        while(st<=e){
            if(!isalphanumeric(s[st])){
                st++;
            }
            else if(!isalphanumeric(s[e])){
                e--;
            }
            else if(tolowercase(s[st]) != tolowercase(s[e])){
                return 0;
            }
            else{
                st++;
                e--;
            }
        }
        return 1;
    }
};
