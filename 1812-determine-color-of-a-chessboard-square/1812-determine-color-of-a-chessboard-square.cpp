class Solution {
public:
    bool squareIsWhite(string c) {
        return ((((int)c[0]-96)+((int)c[1]-48))%2);
    }
};