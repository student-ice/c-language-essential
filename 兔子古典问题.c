#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=1,b=1,sum = 0,i;
    printf("%d %d ",a,b);
    for (i=0;i<10;i++){
        sum = a + b;
        printf("%d ",sum);
        a = b;
        b = sum;            
    }
    
    return 0;
}
