//5! = 5*4*3*2*1 = 5 * (5-1) * (5-2) * (5-3) * (5-4)
// = 5*4!

// 0! = 1 (faktoriāla darbība ir saistīta ar skaitļu kopām
//        jautājums 0! - cik skaitļu kopas var uzstaisīt no tukšas(0) kopas - [] - viena)

#include<stdio.h>

int main(){
long long int i, n, fact;
printf("Ievadi vienu veselu skaitli: \n");
scanf("%lld", &n);

fact = 1;
//for (i=0, fact=1;;)
for(i=1; i<n; i++){
fact = fact * i;
printf("%3lld! = %15lld\n", i, fact);
}

return 0;
}
