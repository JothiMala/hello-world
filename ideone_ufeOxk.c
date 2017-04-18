#include <stdio.h>

int main(void) {
	char a;
	scanf("%c",&a);
	if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
		printf("Vowel");
	}
		else if(a>=65&&a<=90||a>=97&&a<=122){
		printf("Consonant");
		}
	else
		printf("Invalid");
	
	// your code goes here
	return 0;
}
