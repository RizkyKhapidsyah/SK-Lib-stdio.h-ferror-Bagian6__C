#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile = fopen("test.txt", "r");

    fputc('A', pFile);

    if (ferror(pFile)) {
        printf("Some error has occurred.");
    }
        
    fclose(pFile);

    _getch();
    return 0;
}