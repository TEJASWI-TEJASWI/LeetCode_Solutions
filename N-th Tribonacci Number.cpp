class Solution {
public:

int f[51];
int tribonacci(int n)
{
    for(int i=0;i<51;i++){
        f[i]={0};   
    }
    int result=tribonacci_recr(n);
    return result;  
}  
int tribonacci_recr(int n)
{
        /*(n<=2 && n!=2)
            f[n]=1;
            return 1;
        if(n==0)
            f[n]=0;
            return 0;
        */
        f[0]=0;
        f[1]=1;
        f[2]=1;
        if(n>2)
        {
            if(f[n-3]==0)
                f[n-3]=tribonacci_recr(n-3);
            if(f[n-2]==0)
                f[n-2]=tribonacci_recr(n-2);
            if(f[n-1]==0)
                f[n-1]=tribonacci_recr(n-1);
            f[n]=f[n-3]+f[n-2]+f[n-1];
        }  
    return f[n];
}
};