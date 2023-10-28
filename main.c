#include <stdio.h>
#include <string.h>

typedef struct phonebook {
    char name[20];
    char phone_number[20];
    char gender[10];
    char email[50];
    char address[100];
} phonebook;

int main() {
    char names[20];

    // declaring the data
    phonebook JOHN_DETAILS;
    phonebook KEVIN_DETAILS;

    // assigning values for JOHN_DETAILS
    strcpy(JOHN_DETAILS.name, "JOHN");
    strcpy(JOHN_DETAILS.phone_number, "+783938308");
    strcpy(JOHN_DETAILS.gender, "male");
    strcpy(JOHN_DETAILS.email, "bdnis@gmail.com");
    strcpy(JOHN_DETAILS.address, "PORT HARCOT, US");

    // assigning values for KEVIN_DETAILS
    strcpy(KEVIN_DETAILS.name, "KEVIN");
    strcpy(KEVIN_DETAILS.phone_number, "+67899888");
    strcpy(KEVIN_DETAILS.gender, "female");
    strcpy(KEVIN_DETAILS.email, "femas@gmail.com");
    strcpy(KEVIN_DETAILS.address, "567 NRB, Kenya");

    printf("Which contact name are you looking for: ");
    scanf("%s", names);

    if (strcmp(JOHN_DETAILS.name, names) == 0) {
        printf("Fetching details for JOHN\n");
        printf("Name: %s\n", JOHN_DETAILS.name);
        printf("Phone_number: %s\n", JOHN_DETAILS.phone_number);
        printf("Gender: %s\n", JOHN_DETAILS.gender);
        printf("Email: %s\n", JOHN_DETAILS.email);
        printf("Address: %s\n", JOHN_DETAILS.address);
    }
    else if (strcmp(KEVIN_DETAILS.name, names) == 0) {
        printf("Fetching details for KEVIN\n");
        printf("Name: %s\n", KEVIN_DETAILS.name);
        printf("Phone_number: %s\n", KEVIN_DETAILS.phone_number);
        printf("Gender: %s\n", KEVIN_DETAILS.gender);
        printf("Email: %s\n", KEVIN_DETAILS.email);
        printf("Address: %s\n", KEVIN_DETAILS.address);
    }
    else {
        printf("Error name is not available, try again\n");
    }

    return 0;
}
