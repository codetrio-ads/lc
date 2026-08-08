// Last updated: 9/8/2026, 12:38:15 am
class Solution {
public:
    int subtractProductAndSum(int n) {
        int i=0;
        int sum=0,num=0,pdt=1;
        while(n>0){
            num=n%10;
            sum+=num;
            pdt*=num;
            n=n/10;
        }
        return pdt-sum;
    }
};