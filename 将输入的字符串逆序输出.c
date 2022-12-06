#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[20],temp;
    int i,j,len=0;
    scanf("%s",a);
    
    len = strlen(a);
    
    for(i=0,j=len-1;i<len/2;i++,j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("%s",a);
    return 0;
}
