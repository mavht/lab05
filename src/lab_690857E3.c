#include <stdio.h>
#include <string.h>

void copy(char *psource, char *ptarget, unsigned num_char)
{
    unsigned i = 0;
    while (i < num_char && *psource != '\0') {
        *ptarget = *psource;
        psource++;
        ptarget++;
        i++;
    }
    *ptarget = '\0';
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    unsigned remain = buffer_size;
    while (*psrc1 != '\0' && remain > 1) {
        *ptarget = *psrc1;
        psrc1++;
        ptarget++;
        remain--;
    }

    while (*psrc2 != '\0' && remain > 1) {
        *ptarget = * psrc2;
        psrc2++;
        ptarget++;
        remain--;
    } 
    *ptarget = '\0';
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above