#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
char *mynameis = argv[0];
printf("%s\n", mynameis);
return (0);
}