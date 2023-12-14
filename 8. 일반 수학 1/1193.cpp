//https://www.acmicpc.net/problem/1193

#include <stdio.h>

int main(){
    int a, b, n, c = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf("%d\n", j);
        }
    }
}