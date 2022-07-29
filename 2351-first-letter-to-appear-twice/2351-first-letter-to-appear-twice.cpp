class Solution {
public:
    char repeatedCharacter(string s) {
        multiset<char>str;
         for(int i=0;i<s.size();i++)
        {
            str.insert(s[i]); 
            if(str.count(s[i]) == 2)
                return s[i];
            
        }
        return 'a';
    }
};