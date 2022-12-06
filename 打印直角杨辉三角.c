#include<stdio.h>
/*
1
1 1
1 2 1
1 3 3  1
1 4 6  4  1
1 5 10 10 5 1
*/
int main(int argc, char const *argv[])
{
    int i,j,a[6][6];
    for(i=0;i<6;i++){
        a[i][0]=1;
        a[i][i]=1;
        for(j=1;j<i;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;j<6;i++){
        for(j=0;j<=i;j++){
            printf("%-4d",a[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
