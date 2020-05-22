#include<stdio.h>
int find(int a[]);
int i,k;
int main()
{
    scanf("%d",&k);
    int a[k*4];
    for(i=0;i<k;i++)
    {
        scanf("%d %d %d %d",&a[4*i],&a[4*i+1],&a[4*i+2],&a[4*i+3]);    
    }
    for(i=0;i<k;i++)
    {
        if(find(a)==1)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
int find(int a[])
{
    int A=a[4*i],b=a[4*i+1],c=a[4*i+2],d=a[4*i+3],e;
    if(A<b)
    {
        e=A;
        A=b;
        b=e;
    }
    if(c<d) 
    {
        e=c;
        c=d;
        d=e;
    }
    if(A==c)
    {
        if(c==(b+d))
        {
            return 1;
        }else
        {
            return 0;
        }
        
    }else
    {
        return 0;
    }
    
}