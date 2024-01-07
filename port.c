#include<stdio.h>

int main(void){
    int a=50;
    int b=10;
    int c=80;
    printf("hello world.\n");
    for(int i=0;i<10;i++){
        a=a+i;
        b=b+i;
        c=c+a-b;
        printf("a=%d.\n",a);
        printf("a=%d.b=%d.c=%d.\n",a,b,c);
    }
    return 0;
}