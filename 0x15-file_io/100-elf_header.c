#include "main.h"
#include "ref1.c"

/**
 * main - a program that displays the information contained in the ELF header at the start of an ELF file.
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (!head)
	{
		closeELF(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, head, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(head);
		closeELF(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	checkelf(head->e_ident);
	printf("ELF Header:\n");
	printMagic(head->e_ident);
	printClass(head->e_ident);
	printData(head->e_ident);
	printVersion(head->e_ident);
	printOSABI(head->e_ident);
	printAbi(head->e_ident);
	printType(head->e_type, head->e_ident);
	printEntry(head->e_entry, head->e_ident);
	free(head);
	closeELF(op);
	return (0);
}
