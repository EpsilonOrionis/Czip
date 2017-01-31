/* Comprime N files e crea un archivio .zip
 * Autore: Mirko Buttazzo
 */
 
// Inclusione delle librerie utilizzate
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h> // Libreria utilizzata per visualizzare i files nella cartella

// Inizio funzione main
int main(int argc, char** argv) {

    DIR *d;
  	struct dirent *dir;
  	d = opendir(".");
  	if (d) {
  		
    	while ((dir = readdir(d)) != NULL) {
    		
      		printf("%s\n", dir->d_name);
    	}
    closedir(d);
  	}
    return 0;
}
