#include <stdio.h>
#include <stdlib.h>

int main() {
	int spaces, newlines, tabs;
	char *p;

	p = ( char * ) calloc( 100, sizeof( char ) );
	if ( p == NULL ) exit(1);

	// aqui você coloca o código para popular a string de 100 caracteres

	while ( *p != '\0' ) {
		if ( *p == ' ' ) spaces++;
		if ( *p == '\n' ) newlines++;
		if ( *p == '\t' ) tabs++;
		p++;
	}
	
	printf("Espaços: %d\nTabs: %d\nNewlines: %d\n", spaces, tabs, newlines);
    system ("pause");
	return 0;
}
