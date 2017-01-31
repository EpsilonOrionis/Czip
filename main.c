/* Comprime N files e crea un archivio .zip
 * Autore: Mirko Buttazzo
 */
 
// Inclusione delle librerie utilizzate
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h> // Libreria utilizzata per visualizzare i files nella cartella
#include <string.h>

// Prototipo della funzione printContentDirectory
void printContentDirectory();

// Prototipo della funzione countFiles
int countFiles();

// Prototipo della funzione loadFilesNames
void loadFilesNames();

// Inizio funzione main
int main(int argc, char** argv) {
	
	// Variabile per la scelta del menu
	int menu_choice = 0;
	char files[countFiles()][100];
	
	//strcpy(files[0], "Mirko");
	//strcpy(files[1], "aaa");
	
	//printf("%s", files[0]);
	
	//loadFilesNames();
	
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
    		
    		if (!strcmp(dir->d_name, ".") || !strcmp(dir->d_name, "..")) {
    			continue; /* Skip self and parent */
			} else {
				printf("%s\n", dir->d_name);
			}
    		
    	}
    	
    	printf("///////////////////\n\n");
    	closedir(d);
  	}
}

// Conta quanti file ci sono nella cartella
int countFiles() {
	
	int file_count = 0;
	
	// Crea un puntatore di tipo DIR
    DIR *d;
  	struct dirent *dir; 
  	d = opendir(".");
  	
  	if (d) {
  		
    	while ((dir = readdir(d)) != NULL) {
    		
    		if (!strcmp(dir->d_name, ".") || !strcmp(dir->d_name, "..")) {
    			continue; /* Skip self and parent */
			} else {
				file_count++;
			}
    	}
    	
    	closedir(d);
  	}
  	
  	return file_count;
}

// Carica in un vettore i nomi dei files nella cartella
void loadFilesNames() {
	
}
