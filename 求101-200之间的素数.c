#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,sum=0;
    for(i=101;i<=200;i++){
        j=2;
        while(j<i){
            if(i%j==0)break;
            j++;
        }
        if(j==i){printf("%d ",i);sum++;}
    }
    printf("\n102～200之间共有%d个素数\n",sum);    
    return 0;
}
