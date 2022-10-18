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
/*
char c1 = "A";
char c2 = "U";
int i = 2000;
float f1 = 2.3, f2 = 4.5;
double d = -5.6e4;
*/

//printf("%d(%ld bytes)*%d (%ld bytes) = %d (%ld bytes)\n", c1, sizeof(c1), i, sizeof(i), c1*i, sizeof(c1*i));
//printf("%d(%ld bytes)*%d (%ld byes) = %d (%ld bytes)\n", c1, sizeof(c1), c2, sizeof(c2), c1*c2, sizeof(c1*c2));
//printf("%.1f(%ld bytes) %f %.2f(%ld bytes) =%f (%ld bytes)\n", f1, sizeof(f1), f2, sizeof(f2), f1*f2, sizeof(f1*f2));

// >
//printf("\n%1f (%ld bytes) > %.2f (%ld bytes))", f1, sizeof(f1), f2, sizeof(f2));
//c1 = 0;

//!
//printf("\n%d (%ld bytes) -> !%d=%d (%ld bytes))\n", c1, sizeof(c1), !c1, sizeof(!c1));

//>> pa labi, << pa kreisi
unsigned char uc1 = 1; //0000 0001
/*
c1 = 0;
printf("\n%d (%ld bytes << %d (%ld bytes))", uc1, sizeof(uc1), c1, sizeof(c1));
printf("= %d (%ld bytes)\n\n", uc1<<c1, sizeof(uc1<<c1)); // 0000 0100

c1 = 1;
printf("\n%d (%ld bytes << %d (%ld bytes))", uc1, sizeof(uc1), c1, sizeof(c1));
printf("= %d (%ld bytes)\n\n", uc1<<c1, sizeof(uc1<<c1));

c1 = 2;
printf("\n%d (%ld bytes << %d (%ld bytes))", uc1, sizeof(uc1), c1, sizeof(c1));
printf("= %d (%ld bytes)\n\n", uc1<<c1, sizeof(uc1<<c1));

c1 = 3;
printf("\n%d (%ld bytes << %d (%ld bytes))", uc1, sizeof(uc1), c1, sizeof(c1));
printf("= %d (%ld bytes)\n\n", uc1<<c1, sizeof(uc1<<c1));

c1 = 4;
printf("\n%d (%ld bytes << %d (%ld bytes))", uc1, sizeof(uc1), c1, sizeof(c1));
printf("= %d (%ld bytes)\n\n", uc1<<c1, sizeof(uc1<<c1));

c1 = 5;
printf("\n%d (%ld bytes << %d (%ld bytes))", uc1, sizeof(uc1), c1, sizeof(c1));
printf("= %d (%ld bytes)\n\n", uc1<<c1, sizeof(uc1<<c1));

c1 = 6;
printf("\n%d (%ld bytes << %d (%ld bytes))", uc1, sizeof(uc1), c1, sizeof(c1));
printf("= %d (%ld bytes)\n\n", uc1<<c1, sizeof(uc1<<c1));
*/

//>>
uc1 = 120; //0111 1000
c1 = 1;
printf("\n%d (%ld bytes << %d (%ld bytes))", uc1, sizeof(uc1), c1, sizeof(c1));
printf("= %d (%ld bytes)\n\n", uc1>>c1, sizeof(uc1>>c1)); // 0011 1100 (60 dec)

c1 = 2;
printf("\n%d (%ld bytes << %d (%ld bytes))", uc1, sizeof(uc1), c1, sizeof(c1));
printf("= %d (%ld bytes)\n\n", uc1>>c1, sizeof(uc1>>c1)); // 0001 1110 (30 dec)

c1 = 3;
printf("\n%d (%ld bytes << %d (%ld bytes))", uc1, sizeof(uc1), c1, sizeof(c1));
printf("= %d (%ld bytes)\n\n", uc1>>c1, sizeof(uc1>>c1)); // 0000 1111 (15 dec)

/*
78 dec -> 0100 1110 bin
7.bita saturs - 0 (kā tikt pie 7. bita satura) (0)100 1110 lai ir 0 - 0000 000(0)
						(unsigned char) (c1<<0) >>7
6.bita saturs - 1 (kā tikt pie 6. bita satura) 0(1)00 1110 lai ir 1 - 0000 000(1)
						(unsigned char) (c1<<1) >>7
5.bita saturs - 0 (kā tikt pie 5. bita satura) 01(0)0 1110 - lai ir 0 - 0000 000(0)
						(unsigned char) (c1<<2) >>7
4.bita saturs - 0 (kā tikt pie 4. bita satura) 010(0) 1110
3.bita saturs - 1 (kā tikt pie 3. bita satura) 0100 (1)110
2.bita saturs - 1 (kā tikt pie 2. bita satura) 0100 1(1)10
1.bita saturs - 1 (kā tikt pie 1. bita satura) 0100 11(1)0
0.bita saturs - 0 (kā tikt pie 0. bita satura) 0100 111(0)

*/



}
