// Last updated: 9/8/2026, 12:38:50 am
class Solution {
public:
    int romanToInt(string s) {
        int number=0;
        int prev=0;
        for(int i=s.size()-1;i>=0;i--){
            int current=0;
            if(s[i]=='I'){
                current=1;
            }
            if(s[i]=='V'){
                current=5;
            }
            if(s[i]=='X'){
                current=10;
            }
            if(s[i]=='L'){
                current=50;
            }
            if(s[i]=='C'){
                current=100;
            }
            if(s[i]=='D'){
                current=500;
            }
            if(s[i]=='M'){
                current=1000;
            }
            if(prev>current){
                number-=current;
            }
            else {
                number+=current;
            }
            prev=current;
        }
        
        return number;
    }
};