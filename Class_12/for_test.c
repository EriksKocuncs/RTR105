
/*

 cikla operatori:
while - kāmēr;
do while - darīt kāmēr
for - līdz

for( ; izteiksme ; );
for( ; izteiksme ; )
;
for( ; izteiksme ; ){;;;}
while( ; izteiksme ; ){
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

for(a=10; a>=0; a--){ //darbība(s) pirms pirmā ";" tiek izpildīts vienu reizi cikla sākumā
 printf("a: %d\n", a); // tālāk notiek nosacījuma pārbaude, pēc tam cikla ķermeņa koda pildīšana
}                     // un pēc tam mainīgo izmaiņa  atbilstoši cikla aprakstam aiz otra ";"

return 0;
}
