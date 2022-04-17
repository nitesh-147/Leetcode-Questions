class Solution {
public:
    double average(vector<int>& salary) {
        double min=salary[0],max=salary[0],sum=salary[0];
        for(int i=1;i<salary.size();i++)
        {
            sum+=salary[i];
            if(salary[i]>max)
                max=salary[i];
            if(salary[i]<min)
                min=salary[i];
        }
        return (sum-min-max)/(salary.size()-2);
    }
};