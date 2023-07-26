#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 64

char generate_random_char()
{
    return (char)('!' + rand() % ('~' - '!' + 1));
}

int main(void) {
    char password[PASSWORD_LENGTH + 1];

    srand((unsigned int)time(NULL));

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generate_random_char();
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return 0;
}
