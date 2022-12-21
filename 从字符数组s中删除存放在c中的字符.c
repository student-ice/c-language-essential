#include<stdio.h>
int main(int argc, char const *argv[])
{
    char s[20],c;
    int i,k=0;
    gets(s);
    c = getchar();
    for(i=0;s[i]!='\0';i++){
        if(s[i]!=c){
            s[k]=s[i];
            k++;
        }
    }
    s[k]='\0';
    puts(s);
    return 0;
}
