class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int area = 0;
        int s,l;
        while(i<j){
            int temp;
            if(height[i] > height[j]){
                temp = height[j];
                int currArea = (j-i)*temp;
                if(currArea > area){
                    area = currArea;
                    s = i;
                    l = j;
                }
                j--;
            }else{
                temp = height[i];
                int currArea = (j-i)*temp;
                if(currArea > area){
                    area = currArea;
                    s = i;
                    l = j;
                }
                i++;
            }
        }
        return area;
    }
};