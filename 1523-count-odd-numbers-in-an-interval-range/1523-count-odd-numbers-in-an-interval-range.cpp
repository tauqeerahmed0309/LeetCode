class Solution {
public:
    int countOdds(int low,int high) {
        int elements=high-low+1;
        if(elements%2==0){
            return elements/2;
        }
        else{
            if(low%2==1)
                return elements/2+1;
            else
                return elements/2;
        }
    }
};