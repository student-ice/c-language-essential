#include<stdio.h>
#include<string.h>
int main(){
    char s[20],temp;
    int i,j;
    scanf("%s",s);
    for(i=0,j=strlen(s)-1;i<strlen(s)/2;i++,j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    puts(s);
    return 0;
}