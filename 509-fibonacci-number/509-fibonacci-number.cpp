class Solution {
public:
    int fib(int n) {
        int f[n+2];
        int i = 1;
        if(n<=1)
        {return n;}
        f[0]=0;
         f[1]=1;
        
   
         for( i=2;i<=n;i++)
         {
             
        f[i] = f[i-1]+f[i-2];
             }
        return f[n];
    }
};