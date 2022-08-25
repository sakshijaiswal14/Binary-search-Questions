class Solution {
public:
    int mySqrt(int x) {
        double l=0, h=x;
        int ans=0;
        while(l<=h){
            double mid=(l+h)/2;
            long int num=mid*mid;
            if(num<x){
                l=mid;
            }
            else if(num>x){
                h=mid;
            }
            else{
                ans=mid;
                break;
            }
            // cout<<l<<" "<<h<<" "<<mid<<endl;
        }
        return ans;
    }
};