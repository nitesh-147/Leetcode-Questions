class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int c=1;
       for(int i=d.size()-1;i>=0;i--){
           d[i]=(d[i]+c)%10;
           if(d[i])
               c=0;
           else
               c=1;
           if(c==0)
               break;
       }
        if(c)
        {
            vector<int> n;
            n.push_back(1);
            for(auto i: d)
                n.push_back(i);
            return n;
        }
        return d;
    }
};