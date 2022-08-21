CRITICAL TESTCASE- 2147395599

```
int mySqrt(int x) {
        int ans=0;
        double l=0,h=x;
        while(l<h){
            double mid=(l+h)/2;
            long int num=mid*mid;
            if(num>x){
                h=mid;
            }
            else if(num<x){
                l=mid;
            }
            else if(num==x){
                ans=mid;
                break;
            }
        }
        
```

**WITHOUT USING LONG LONG**
```
int mySqrt(int x) {
        if(x <= 1)
            return x;

        int l = 0, r = x;
        while(l <= r){
            int m = l + (r-l)/2;
            if(x / m == m)
                return m;
            else if(x / m < m)
                r = m-1;
            else
                l = m+1;
        }
        return r;
    }
```
