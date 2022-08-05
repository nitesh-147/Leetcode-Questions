class Solution {
public:
    bool squareIsWhite(string c) {
        return ((int)c[0]+(int)c[1])%2;
    }
};