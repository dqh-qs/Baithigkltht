
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void list_directory(const char *path) {
    struct dirent *entry;
    DIR *dp = opendir(path);
    
    if (dp == NULL) {
        perror("opendir");
        return;
    }
    
    while ((entry = readdir(dp))) {
        // Ignore hidden files
        if (entry->d_name[0] == '.') continue;
        printf("%s\n", entry->d_name);
    }
    
    closedir(dp);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        list_directory("."); // List current directory
    } else {
        for (int i = 1; i < argc; i++) {
            list_directory(argv[i]); // List specified directory
        }
    }
    return 0;
}
