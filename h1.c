/*
  2
12
1012
Sample Output

2
3
Explanation

The number  is broken into two digits,  and . When  is divided by either of those two digits, the remainder is  so they are both divisors.

The number  is broken into four digits, , , , and .  is evenly divisible by its digits , , and , but it is not divisible by  as division by zero is undefined.


*/





#include<stdio.h>
#include<stdlib.h>

int gh(int *p){
   int k = *p;
   int count = 0;
   while (*p > 0) {
        int temp = (*p) % 10;
        if (temp != 0 && k % temp == 0) { //here we should avoid doing divison with zero which causing runtime error!
            ++count;
        }
        *p = *p / 10;
   }
   return count;
}

int main(){
    int n;
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;++i){
        int s;
        scanf("%d",&s);
        int o = gh(&s); // Call gh with the address of s
        p[i] = o; // Store the returned value in p[i]
    }
   
    for(int i=0;i<n;++i){
       printf("%d\n",p[i]);
    }    

    free(p); // Free dynamically allocated memory
    
    return 0;
}
