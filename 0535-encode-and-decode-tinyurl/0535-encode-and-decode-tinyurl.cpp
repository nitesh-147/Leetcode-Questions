class Solution {
public:
    unordered_map<string,string> m1,m2;
    int i=1;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if(m1[longUrl]==""){
            string s;
            while(i/26!=0){
                s+=('a'+(i-1));
                i/=26;
            }
            if(i!=0)s+=('a'+(i-1));
            m1[longUrl]="http://tinyurl.com/"+s;
            m2["http://tinyurl.com/"+s]=longUrl;
            return m1[longUrl];
        }
        else return m1[longUrl];
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m2[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));