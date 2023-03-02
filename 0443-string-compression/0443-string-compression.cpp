class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=1,count=1;
        char curr=chars[0];
        while(j<chars.size()){
            if(chars[j]!=chars[j-1]){
                chars[i++]=curr;
                if(count>1){
                    string temp=to_string(count);
                    for(int k=0;k<temp.size();k++){
                        chars[i++]=temp[k];
                    }
                }
                curr=chars[j];
                count=0;
            }
            count++;
            j++;
        }
         chars[i++]=curr;
                if(count>1){
                    string temp=to_string(count);
                    for(int k=0;k<temp.size();k++){
                        chars[i++]=temp[k];
                    }
                }
        return i;
    }
};