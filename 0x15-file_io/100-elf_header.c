#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(char *msg)
{
fprintf(stderr, "%s\n", msg);
exit(98);
}

int main(int argc, char *argv[])
{
if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
}

int fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
print_error("Error: Unable to open file");
}

Elf64_Ehdr elf_header;
ssize_t bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));

if (bytes_read != sizeof(Elf64_Ehdr))
{
print_error("Error: Unable to read ELF header");
}

// Check if it's an ELF file
if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
{
print_error("Error: Not an ELF file");
}

printf("Magic: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
elf_header.e_ident[EI_MAG0], elf_header.e_ident[EI_MAG1], elf_header.e_ident[EI_MAG2],
elf_header.e_ident[EI_MAG3], elf_header.e_ident[EI_MAG4], elf_header.e_ident[EI_MAG5],
elf_header.e_ident[EI_MAG6], elf_header.e_ident[EI_MAG7], elf_header.e_ident[EI_MAG8],
elf_header.e_ident[EI_MAG9], elf_header.e_ident[EI_MAG10], elf_header.e_ident[EI_MAG11],
elf_header.e_ident[EI_MAG12]);

printf("Class:                             %s\n", (elf_header.e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
printf("Data:                              %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
printf("Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
printf("OS/ABI:                            %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
printf("ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
printf("Type:                              0x%x\n", elf_header.e_type);
printf("Entry point address:               0x%lx\n", elf_header.e_entry);

close(fd);
return (0);
}
