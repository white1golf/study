/**
 * BaekJoon Online Judge #4673
 * ref: https://www.acmicpc.net/problem/4673
 * Date: 2017.03.05
 */
#include <stdio.h>
#define MAX 10000
int numbers[MAX]={[0 ... 9999] = 1};
int get_dn(int n);

int main(void){
    int i,j,k;
    int dn = 0;
    for(i=0; i < MAX; i++){
        if( numbers[i] == 0) continue;
        printf("%d\n",i+1);
        j = get_dn(i+1);
        while(numbers[j-1] == 1 && j <= MAX){
            numbers[j-1] = 0;
            j = get_dn(j);
        }
    }
    
}

int get_dn(int n){
    int dn = n;
    int i;
    for(i = 0; i < 4; i ++){
        dn+= n%10;
        n = n/10;
    }

    return dn;
}


