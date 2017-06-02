#include <stdio.h>
#include <ctype.h>

void TrimSpace(char *str)
{
	char *p = str;

	while (*str != '\0') {
		if (!isspace(*str)) {
		*p = *str;
		p++;
		}
		str++;
	}
	*p = '\0';
}

char deletespace(char *x[50], char *y[50]);
int main (int argc, const char *argv[])
{
	static char a[] = "A BC   D E  FG  ";
	static char b[] = "B  B  B C D  B";
	static char c[] = "I have a pen";	
	TrimSpace(a);
	printf("\%s\n", a);
	TrimSpace(b);
	printf("\%s\n", b);
	TrimSpace(c);
	printf("\%s\n", c);
	return 0;
}
