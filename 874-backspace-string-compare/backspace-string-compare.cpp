class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.size() -1;
        int j = t.size() -1;
        while( i>=0 || j>=0){
            i = getNext(s,i);
            j = getNext(t , j);
            if(i < 0 && j<0)
            return true;
            if(i < 0 || j<0)
            return false;
            if(s[i] != t[j])
            return false;
            i--;
            j--;
        }
        return true;
    }
    private:
    int getNext(string &str , int i){
        int skip = 0;
        while(i >=0){
            if(str[i] == '#')
            skip++;
            else if(skip > 0 )
            skip--;
            else
            return i;
            i--;
        }
        return -1;
    }
};