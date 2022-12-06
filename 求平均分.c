#include<stdio.h>
int main(int argc, char const *argv[])
{
    double a[4][5],sum=0;
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%lf",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        sum = 0;
        for(j=0;j<4;j++){
            sum+=a[i][j];
        }
        a[i][4] = sum/4.0;
    }
    for(i=0;i<5;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum += a[j][i];
            
        }
        a[3][i] = sum/3.0;
    }
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%-6.2lf ",a[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
