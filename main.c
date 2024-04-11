#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char user_name[50];
    printf("Enter your NAME first -_- (1->5char!) :");
    scanf("%s", user_name);
    int user_name_length = strlen(user_name);
    printf("name length is : %d", user_name_length);
    do {
        if (user_name_length < 1 || user_name_length > 5 || user_name_length == 0) {
            printf("=== You should enter a valid Name ! (from 2 char* to 5 max!) ===\n (Your name is ) : ");
            break;
        } else {
            printf("=== Thanks! everything's Done, Just wait for the newt instruction (usually from 2 to 4 secs!) ===\n");
            printf("user name length is %d\n\n", user_name_length);
            break;
        }
    } while (true);
    printf("=== Welcome to X7 Calculator <%s> ^_^ ===\n", user_name);

    return 0;
}
