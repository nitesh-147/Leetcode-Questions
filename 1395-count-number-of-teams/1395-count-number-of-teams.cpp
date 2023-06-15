class Solution {
public:
    int numTeams(vector<int>& rating) {
        // int ans=0;
        // for(int i=0;i<rating.size();i++){
        //     for(int j=i+1;j<rating.size();j++){
        //         for(int k=j+1;k<rating.size();k++){
        //             if(rating[j]>rating[i] && rating[k]>rating[j]) ans++;
        //             if(rating[j]<rating[i] && rating[k]<rating[j]) ans++;
        //         }
        //     }
        // }
        // return ans;
        int count = 0;
    int n = rating.size();

    for (int j = 1; j < n - 1; j++) {
        int left_smaller = 0, left_larger = 0;
        int right_smaller = 0, right_larger = 0;

        for (int i = 0; i < j; i++) {
            if (rating[i] < rating[j])
                left_smaller++;
            else if (rating[i] > rating[j])
                left_larger++;
        }

        for (int k = j + 1; k < n; k++) {
            if (rating[k] < rating[j])
                right_smaller++;
            else if (rating[k] > rating[j])
                right_larger++;
        }

        count += (left_smaller * right_larger) + (left_larger * right_smaller);
    }

    return count;
    }
};