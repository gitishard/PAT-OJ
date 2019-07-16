class Solution {
public:
    /*
        只要赚了钱就计入总的收入中，也就是说只要有连续的递增就加入收益中
        这是因为最大的峰值与最小的谷值之差一定是小于等于整个波动中连续递增的各个部分只和，因为最大的峰值与最小的谷值之间可能会出现其他上升的部分，也即是说每一个连续的波动开始就是买入点，而结束就是卖出点．
    */
    int maxProfit(vector<int>& prices) {
        int rst = 0;
        int len = prices.size();
        for(int i = 1; i < len; ++i){
            if(prices[i] > prices[i-1])
                rst += (prices[i] - prices[i-1]);
        }
        return rst;
    }
};
