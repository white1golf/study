/**
 * https://www.acmicpc.net/problem/1065
 * #1065
 * 17.3.09
 */

#include <stdio.h>

int is_hansoo(int num);

int main(void){

    int in_num, i;
    int count = 0;

    scanf("%d",&in_num);

    for(i=0;i<in_num;i++){
        if(is_hansoo(i+1) == 1) count+=1;
    }

    printf("%d", count);
}

int is_hansoo(int num){
    int i,a1,a2;
   if(num>=1 && num <100) return 1;
   else if(num>=100 && num<1000){
       a1 = num%10 - (num/10)%10;
       a2 = (num/10)%10 - ((num/10)/10)%10;
      if( a1 == a2) return 1;
      else return 0;
   }
   else return 0;
}
