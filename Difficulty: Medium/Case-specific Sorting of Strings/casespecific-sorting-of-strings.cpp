class Solution {
  public:
    string caseSort(string& s) {
        // code here
         vector <int> upper(26, 0), lower(26, 0);
        for(char c : s){
            if(isupper(c)) upper[c - 'A']++;
            else lower[c - 'a']++;
        }
        
        
        int i = 0, j = 0;
        for(char& c: s){
            while(i < 26 && upper[i] == 0) i++;
            while(j < 26 && lower[j] == 0) j++;
            
            if(isupper(c)) c = char('A' + i), upper[i]--;
            else c = char('a' + j), lower[j]--;
        }
        
        return s;
    }
};