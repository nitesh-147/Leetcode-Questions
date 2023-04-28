class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        stack<string> sta;
        int count = 0;
        while(!strs.empty()){
            count++;
            sta.push(strs.back());
            strs.pop_back();
            while(!sta.empty()){
                string str = sta.top();
                sta.pop();
                for(int i=0; i<strs.size(); i++){
                    if(similar(strs[i], str)){
                        sta.push(strs[i]);
                        swap(strs[i], strs.back());
                        strs.pop_back();
                        i--;
                    }
                }
            }
        }
        return count;
    }

    bool similar(string str1, string str2){
        if(str1 == str2)return true;
        if(str1.length() != str2.length())return false;
        int i1 = -1;
        for(int i = 0; i < str1.length(); i++){
            if(str1[i] != str2[i]){
                if(i1 == -1)
                    i1 =i;
                else{
                    swap(str1[i1], str1[i]);
                    return str1 == str2;
                }
            }
        }
        return false;
    }
};