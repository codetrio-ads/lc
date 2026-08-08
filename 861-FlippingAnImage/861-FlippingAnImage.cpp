// Last updated: 9/8/2026, 12:38:22 am
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto &row : image) { 
            reverse(row.begin(), row.end());
        }
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image.size();j++){
                if(image[i][j]==0){
                    image[i][j]=1;
                }
                else if(image[i][j]==1){
                    image[i][j]=0;
                }
            }
        }
        return image;
    }
};