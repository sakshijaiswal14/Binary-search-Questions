CRITICAL TESTCASE- 2147395599
​
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
​
**WITHOUT USING LONG LONG**
```
int mySqrt(int x) {