class Solution {
public:
    bool checkPowersOfThree(int n) {
        int temp=n;
        while(temp!=1)
        {
                int rem=temp%3;
                if(rem!=0 && rem!=1)
                    return false;
                temp=temp/3;
        
        }
        return true;


        
    }
};