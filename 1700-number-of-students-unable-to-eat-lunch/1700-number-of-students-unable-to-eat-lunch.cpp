class Solution {
public:
    
    int countStudents(vector<int>& students, vector<int>& s) {
       int c[]={0,0},i;
        for(int i:students)
            c[i]++;
        for( i=0;i<s.size() && c[s[i]]>0;i++)
            c[s[i]]--;
        
        return s.size()-i;
        
    }
};