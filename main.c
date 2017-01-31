/* Comprime N files e crea un archivio .zip
 * Autore: Mirko Buttazzo
 */
 
// Inclusione delle librerie utilizzate
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h> // Libreria utilizzata per visualizzare i files nella cartella

// Prototipo della funzione printContentDirectory
void printContentDirectory();

// Prototipo della funzione loadFilesNames
int loadFilesNames();

// Inizio funzione main
int main(int argc, char** argv) {
	
	// Variabile per la scelta del menu
	int menu_choice = 0;
	// Vettore che conterr� i nomi dei files da archiviare
	//char to_archive[getFilesCount()];
	// Questo vettore contiene il nome dei files della cartella
	//char all_files[getFilesCount()];
	
	loadFilesNames();
	
   // Stampa un menu per chiedere cosa fare
   do {
		
		printf("1) Mostra contenuto della cartella\n");
		printf("2) Aggiungi file ad archivio\n");
		printf("3) Rimuovi file ad archivio\n");
		printf("4) Genera archivio .zip\n");
		printf("9) Esci\n\n");
		printf("Scegli una delle voci elencate: ");
		scanf("%d", &menu_choice);
				
		switch(menu_choice) {
		
			case 1: {
				
				printContentDirectory();
				menu_choice = 0;
				break;
			}
			
			case 2: {
				
				
				break;
			}
			
			case 9: {
				
				printf("Czip by Mirko Buttazzo (mirko9662@gmail.com)");
				break;
			}
			
			default: {
				
				printf("Operazione non consentita\n\n");
				menu_choice = 0;
				break;
			}
		}	
		
	} while(menu_choice == 0);

    return 0;
}

// Questa funzione visualizza i file contenuti nella directory
void printContentDirectory() {
	
	// Crea un puntatore di tipo DIR
    DIR *d;
  	struct dirent *dir; 
  	d = opendir(".");
  	
  	printf("\n//// DIRECTORY ////\n");
  	if (d) {
  		
    	while ((dir = readdir(d)) != NULL) {
    		
      		printf("%s\n", dir->d_name);
    	}
    	
    printf("///////////////////\n\n");
    closedir(d);
  	}
}

// Carica in un vettore i nomi dei files nella cartella
void loadFilesNames() {
	
}
