// Last updated: 9/8/2026, 12:38:27 am
class Solution {
public:
    bool judgeCircle(string moves) {
        int R=0,D=0,U=0,L=0;
        for(int i=0; i<moves.size();i++){
            if(moves[i]=='R'){
                R++;
            }
            else if(moves[i]=='L'){
                L++;
            }
            else if(moves[i]=='U'){
                U++;
            }
            else if(moves[i]=='D'){
                D++;
            }
        }
        if(D==U && R==L){
            return true;
        }

        return false;
    }
};