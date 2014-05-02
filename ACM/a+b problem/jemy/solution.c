#include <stdio.h>
int main(int argc, char* argv[])
{
    int a,b;
    while(fscanf(stdin,"%d %d",&a,&b)!=-1)
    {
        printf("%d\n",a+b);
    }
    return 0;
}