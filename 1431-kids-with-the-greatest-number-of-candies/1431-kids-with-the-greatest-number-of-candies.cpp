class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> resultArr;
        int highestCandies = *max_element(candies.begin(),candies.end());
        for(auto itr:candies){
            if((itr+extraCandies)>=highestCandies){
                resultArr.push_back(true);
            }
            else{
                resultArr.push_back(false);
            }
        }
        return resultArr;
    }
};