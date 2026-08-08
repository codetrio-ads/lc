// Last updated: 9/8/2026, 12:38:03 am
class Solution {
public:
    int countDigits(int num) {
        int numb=num;
        int count=0;
        
            while(num>0){
                int dig=num%10;
                if(num%10!=0 && numb%dig==0){
                    count++;
                }
                num=num/10;
            }
        return count;
    }
};