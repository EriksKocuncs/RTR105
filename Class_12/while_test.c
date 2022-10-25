
/*

 cikla operatori:
while - kāmēr;
do while - darīt kāmēr
for - līdz

while(izteiksme);
while(izteiksme)
;
while(izteiksme){;;;}
while(izteiksme){
;
;
}
aiz while () iekavām esošā darbība (vai darbības) tiks izpildītas tikmēr, 
kamēr iekavās () izteiksmes rezultāts ir "true"
true - izteiksmes rezultāta bitu sēcībā ir vismaz viens 1
false - visi biti ir stāviklī 0
(a>0) - AR UNSIGNED DATU TIPU "FALSE" NEKAD NEIEGŪS!

*/

#include<stdio.h>

int main(){

int a=10;
while(a>=0){
 printf("a: %d\n", a);
 a--; //a-1;
}

return 0;

}
