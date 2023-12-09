//https://www.acmicpc.net/problem/2908

#include <stdio.h>

int main(){
    char a[3], b[3];
    scanf("%s %s", a, b);
    char x = a[2] + a[1] + a[0];
    printf("%d", int(x));
}