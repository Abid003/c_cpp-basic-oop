#include<stdio.h>
    int f_a(int n){
    if(n>=3)
    {
        return f_a(n/2)+3 ;                                                                                                                                                                          ;
    }
    else return 0;
    }
int main()
{
    int n, a;
    scanf("%d",&n);
    a=f_a(n);
    printf("%d",a);

}
