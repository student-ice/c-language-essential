#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    for(a=1;a<=9;a++){
        for(b=1;b<=a;b++){
            printf("%d*%d=%-3d",b,a,a*b);
        }
        putchar('\n');
    }
    return 0;
}
