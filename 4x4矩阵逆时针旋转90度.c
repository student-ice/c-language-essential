#include<stdio.h>
/*
1   2   3   4       4   8  12   16 
5   6   7   8      3   7  11   15
9   10  11  12     2   6   10   14
13  14  15  16     1   5   9    13


*/
int main(int argc, char const *argv[])
{
    int a[4][4],b[4][4],i,j;
    int *p=*b;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
            b[3-j][i]=a[i][j];
        }        
    }
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",b[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
