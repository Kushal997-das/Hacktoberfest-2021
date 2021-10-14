class Solution {
public:
    int reverse(int n) 
    {
        int sign = n<0 ? -1 : 1;
        long long x = (long long)(n) * sign;
        long long remainder,revers=0;
        if(x >=0 && x <= 9)
        {
            return x;
        }
        while(x != 0)
        {
            remainder = x%10;
            revers = revers*10 + remainder;
            x = x/10;
        }
        if (sign == 1 &&  revers > 2147483647) {
            return 0;
        }
        if (sign == -1 && revers > 2147483648) {
            return 0;
        }

        return revers*sign;
    }
};