// Raz Reed, Andrew Ma
// Network Programming (CSCI 4220)
// Fall 2019

#include <stdio.h>

int main(int argc, char** argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "Missing arguments: [start of port range] [end of port range]\n");
		return 1;
	}

	int startPort = atoi(argv[1]);
	int endPort = atoi(argv[2]);

	return 0;
}
