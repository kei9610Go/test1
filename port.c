#include<stdio.h>

int main(void){
    int a=50;
    int b=10;
    printf("hello world.\n");
    for(int i=0;i<10;i++){
        a=a+i;
        b=b+i;
        printf("a=%d.\n",a);
        printf("a=%d.b=%d.\n",a,b);
    }
    return 0;
}