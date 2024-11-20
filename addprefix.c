#include <stdio.h>

int main(int argc, char *argv[]){
	if (argc == 1){ // use the current directory as the prefix
		printf("Use the directory name\n");
	} else if (argc == 2){ // use the value passed in from the command line as the prefix
		printf("Use the command line argument\n");
	} else {
		printf("Usage: addprefix <prefix>\n");
		printf("If prefix is omitted, the directory name is used\n");
		return 1;
	}
	
	return 0;
}
