class Solution {
public:
    /*
    We need to find the largest peak following the smallest valley.
    问题，如更新最小值，可能当前最小值后面的最大值之差不是最大的收益
    最大值的更新是要保证在当前最小值后且收益最大，那么最大值不需要保留，只需要用于计算收益即可．
    所以在后续的判断中，就要使最小值更小，最大值更大(差值更大)
    rst的更新保证了不会出现因最小值改变但差值不变会更小的情况
    */
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int rst = 0;
        int len = prices.size();
        for(int i = 0; i < len; ++i){
            if(prices[i] < min)
                min = prices[i];
            else if(prices[i] - min > rst)
                rst = prices[i] - min;
                
        }            
        return rst;
    }
};
