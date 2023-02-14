class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,int> m;
        int x=1;
        for(auto i:key){
            if(i>='a' && i<='z'){
                if(!m[i])m[i]=x++;
                
            }
        }
        for(auto i:m)cout<<i.first<<" "<<i.second<<endl;
        for(int i=0;i<message.size();i++){
            if(message[i]>='a' && message[i]<='z')
            message[i]=m[message[i]]-1+'a';
        }
        return message;
    }
};