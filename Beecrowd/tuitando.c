#include <stdio.h>
#include <string.h>

int main() {

    char tweet[500];
    fgets(tweet, 500, stdin);
    tweet[strcspn(tweet, "\n")] = 0;
    // tweet[strlen (tweet) - 1] = '\0';
    int size = strlen(tweet);
    if (size <= 140){
        printf("TWEET\n");
    } else {
        printf("MUTE\n");
    }

    return 0;
}