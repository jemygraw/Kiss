#include<stdio.h>

int main(int argc, char* argv[])
{
    int n;
    unsigned int sum=0;
    while (scanf("%d",&n)!=EOF)
    {
		if(n>=2){
			sum=(n%2==0)?n/2*(n+1):(n+1)/2*n;
		}else{
			sum=n;
		}
        printf("%d\n\n",sum);
    }
    return 0;
}