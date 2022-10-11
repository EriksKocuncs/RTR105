#include<stdio.h>

int main() {
	char a = 10; // divas darbības - mainīga deklarēšana un vērtības piešķiršana
	             // mainīgā nosaukums nevar saturēt atstarpes un nevar sakties ar skaitli
	             // var būt ar mnemonisko nosaukumu (piem., cilindra_tilpums)
	             // char a - vietas piešķiršana atmiņā (deklarēšana); a = 10 - vērtības piešķiršana; 
		     // char a = 10 - mainīga definēšana
		     // 1 byte: 0000 1010
		     // int - vesela tipa konstantēm
		     // double - reāla tipa konstantēm
printf("a mainīgā vērtība (kā simbols): %c\n", a);
printf("a mainīgā vērtība (kā decimāls skaitlis): %d\n", a);
printf("a vērtība (kā hexadecimāls skaitlis): %#x\n", a);
printf("a vērtība (kā oktālais skaitlis): %#o\n", a);

// char a; // nedrīkst pārdeklarēt mainīgo!!!
char b;
printf("\nb mainīgā vērtība pirms vērtības piešķiršanas (kā simbols): %c\n", b);
printf("b mainīgā vērtība (kā decimāls skaitlis): %d\n", b);
printf("b vērtība (kā hexadecimāls skaitlis): %#x\n", b);
printf("b vērtība (kā oktālais skaitlis): %#o\n", b);

b = 250;
//250 vietā redzam -6 , kāpēc?                                                    7654 3210
// 250 (dec) = 128(2^7) + 64(2^6) + 32(2^5) + 16(2^4) + 8(2^3) + 2(2^1) -> (bin)  1111 1010
// char -> signed char => vecākais bits zīmei                                    (1)111 1010
//                                                                             ^-> 000 0101
//                                                                           +1 -> 000 0001
//                                                                              --------------
//                                                                                 000 0110
//                                                             0000 0110 (bin) -> 6 (dec)
//                                                             rezultātā ir -6
printf("\nb mainīgā vērtība pēc vērtības piešķiršanas (kā simbols): %c\n", b);
printf("b mainīgā vērtība (kā decimāls skaitlis): %d\n", b);
printf("b vērtība (kā hexadecimāls skaitlis): %#x\n", b);
printf("b vērtība (kā oktālais skaitlis): %#o\n", b);


return 0;
}
