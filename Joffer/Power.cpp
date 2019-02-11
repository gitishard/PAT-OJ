class Solution {
public:
    double Power(double base, int exponent) {
        if(base == 0.0 && exponent <= 0)
            return 0;//invalid input
        //把数字类型化为unsign int 减少存储，且数字是正数
        unsigned int absExp = (unsigned int) exponent;
        if(exponent < 0)
            absExp = (unsigned int)(-exponent);
        double rst = PowerUnsignedExp(base, absExp);
        if(exponent < 0)
            rst = 1.0 / rst;
        return rst;
    }
    double PowerUnsignedExp(double base, unsigned int exp){
        if(exp == 0)
            return 1;
        if(exp == 1)
            return base;
        double rst = PowerUnsignedExp(base, exp >> 1);//exp>>1 == exp / 2
        rst *= rst;
        if(exp & 0x1 == 1){
            // if exp is 奇数
            rst *= base;
        }
        return rst;
    }
};
