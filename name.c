#include <stdio.h>
double m[] = { 9.95963171225462228399162147146E-307, 5};
void gen() {
	if (m[1]--) {
		m[0] /= 2;
		gen();
	} else {
		m[0] -= ( 8.87311048192124586227196764917E-309 ) ;
		puts((char *) m);
		return ;
	}
}
int main() { gen(); return 0;}
