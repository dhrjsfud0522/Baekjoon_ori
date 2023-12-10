//https://www.acmicpc.net/problem/1316

#include <stdio.h>
#include <string.h>

int main(){
    char l[102] = {};
    int n[26] = {};
    int k, j, c;
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        scanf("%s", l);
        j = strlen(l);
        for(int m = 0; m < j; m++){
            c += 1;
            if(n[int(l[m]) - 97] != 1){
                n[int(l[m]) - 97] = 1;
            }
            else{
                break;
                c -= 1;
            }
        }
    }
    printf("%d", c);
}