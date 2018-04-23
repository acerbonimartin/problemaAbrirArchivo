/*
 ============================================================================
 Name        : abrirArchivo.c
 Author      : yo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <arpa/inet.h>
#include <commons/collections/list.h>
#include <commons/config.h>
#include <commons/log.h>
#include <commons/string.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	FILE *fp;
	   int c;

	   fp = fopen("texto.txt","r");
	   while(1) {
	      c = fgetc(fp);
	      if( feof(fp) ) {
	         break;
	      }
	      printf("%c", c);
	   }
	   fclose(fp);
	   return(0);
}
