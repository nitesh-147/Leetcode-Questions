class Solution {
public:
    string getHint(string secret, string guess) {
        
        unordered_map<char, int> m;
    int a = 0, b = 0;
    for (int i = 0; i < secret.size(); i++)
    {
        if (secret[i] == guess[i])
            a++;
        else
        {
            m[secret[i]]++;
        }
    }
    for (int i = 0; i < secret.size(); i++)
    {
        if (secret[i] != guess[i])
        {
            if (m[guess[i]] != 0)
            {
                b++;
                m[guess[i]]--;
            }
        }
    }
    string ans = to_string(a) + "A" + to_string(b) + "B";
    return ans;

    }
};