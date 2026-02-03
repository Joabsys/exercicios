#include <stdio.h>

int main() {
    FILE *filePtr;
    char data[] = "Hi, Ram! This is a note.";  // This is our letter

    // We try to open a file to put our letter inside
    filePtr = fopen("note_to_ram.txt", "w");
    if (filePtr == NULL) {
        printf("Oh no! Couldn't create the file.\n");
        return 1;
    }

    // Using fwrite, we put our letter in the file
    fwrite(data, sizeof(char), sizeof(data)-1, filePtr);  // -1 because we don't want to write the end-of-string character

    printf("Saved our note in the file!\n");

    // Always close the box (file) when you're done
    fclose(filePtr);

    return 0;
}