#include "monty.h"

int main(int argc, char **argv){

    if (argc != 2){
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    f_func(argv[1]);
	return (0);
}