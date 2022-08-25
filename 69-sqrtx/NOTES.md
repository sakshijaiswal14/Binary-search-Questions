CRITICAL TESTCASE
8
10
15
0
8799999
2147483647

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

**Find Nth root of M**
[https://practice.geeksforgeeks.org/problems/find-nth-root-of-m5843/1]
```
double multiply(double mid,int n){
    double val=1;
    for(int i=1;i<=n;i++){
        val*=mid;
    }
    return val;
}
double findNthRootOfM(int n, int m) {
	// Write your code here.
    double mid,l=1,h=m;
    while(h-l>1e-7){
        mid=(h+l)/2;
//         cout<<mid<<" ";
        if(multiply(mid,n)>m){
            h=mid;
        }
        else{
            l=mid;
        }
//         cout<<l<<" "<<h<<endl;
    }
    return mid;
}
```

