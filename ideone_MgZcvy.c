#include <stdio.h>

int main(void) {
	// your code goes here
	char a;
	scanf("%c",&a);
	if((a>=65&&a<=90)||(a>=97&&a<=122)){
		printf("Alphabet");
	}
	else
	printf("Not Alphabet");
	return 0;
}
