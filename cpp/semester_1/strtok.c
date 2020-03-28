#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char str[] = "jfk, fjlsk, fjs, , jfls234.";
    char *pch = strtok(str, ",");
    while (pch != NULL) {
	printf("%s\n", pch);
	pch = strtok(NULL, " ,.-");
    }
    return 0;
}
