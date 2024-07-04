class Solution {
public:
    int hammingWeight(int n) {
         int count=0;
   while(n){
        int a= n&1;
       if(a == 1){
           count++;
       }
       n>>=1;
   }
   cout<<count;
   return count;
    }
};