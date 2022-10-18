// operācijas:	operands_1 operācija operands_2
//              (datu tips)          (datu tips)
//				||
//				\/
//			operācijas_rezultāts
//                          (datu tips)
//       operācijas rezultāta datu tips ir "lielākais" datu tips
// matemātiskās: +, -, *, /, %, ++, --.
// attiecības: <, <=, >=, >, ==, !=.
// loģiskās: &&, ||.
// loģiskās pa bitiem: &, |, ^, !.
// bitu: >>, <<.
//
// ko pētīt šodien: kā strādā operācija?
//		    vai operācijā drīkst izmantot jebkuru datu tipu?
//		    operāciju izpildīšanas sēcība? (to nosaka prioritāte, sēcības kontrolei izmanto ())
// / (int/int vai char/char), %, &, |, ^, !, &&, ||, <<, >>



#include<stdio.h>

int main(){

char c1 = "A";
char c2 = "U";
int i = 2000;
float f1 = 2.3, f2 = 4.5;
double d = -5.6e4;

printf("%d(%ld bytes)*%d (%ld bytes) = %d (%ld bytes)\n", c1, sizeof(c1), i, sizeof(i), c1*i, sizeof(c1*i));
printf("%d(%ld bytes)*%d (%ld byes) = %d (%ld bytes)\n", c1, sizeof(c1), c2, sizeof(c2), c1*c2, sizeof(c1*c2));
printf("%.1f(%ld bytes) %f %.2f(%ld bytes) =%f (%ld bytes)\n", f1, sizeof(f1), f2, sizeof(f2), f1*f2, sizeof(f1*f2));

// >
printf("\n%1f (%ld bytes) > %.2f (%ld bytes))", f1, sizeof(f1), f2, sizeof(f2));
c1 = 0;
//!
printf("\n%d (%ld bytes) -> !%d=%d (%ld bytes))\n", c1, sizeof(c1), !c1, sizeof(!c1));


}
