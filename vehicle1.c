#include <stdio.h>

int main() {
    int n;
    printf("Enter number of vehicles: ");
    scanf("%d", &n);

    int vehicleID[100];
    int rentPerDay[100];
    int status[100];  // 1 = available, 0 = rented

    // Input vehicle details
    for (int i = 0; i < n; i++) {
        printf("\nEnter Vehicle ID: ");
        scanf("%d", &vehicleID[i]);

        printf("Enter Rent Per Day: ");
        scanf("%d", &rentPerDay[i]);

        status[i] = 1;  // initially available
    }

    int choice;

    // Menu loop
    while (1) {
        printf("\n---- Vehicle Rental Menu ----\n");
        printf("1. Rent Vehicle\n");
        printf("2. Return Vehicle\n");
        printf("3. Display All Vehicles\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int id;
            printf("Enter Vehicle ID to rent: ");
            scanf("%d", &id);

            int found = 0;

            for (int i = 0; i < n; i++) {
                if (vehicleID[i] == id) {
                    found = 1;
                    if (status[i] == 1) {
                        status[i] = 0;
                        printf("Vehicle %d rented.\n", id);
                    } else {
                        printf("Vehicle already rented!\n");
                    }
                    break;
                }
            }
            if (!found) {
                printf("Vehicle not found.\n");
            }
        }

        else if (choice == 2) {
            int id;
            printf("Enter Vehicle ID to return: ");
            scanf("%d", &id);

            int found = 0;

            for (int i = 0; i < n; i++) {
                if (vehicleID[i] == id) {
                    found = 1;
                    if (status[i] == 0) {
                        status[i] = 1;
                        printf("Vehicle %d returned.\n", id);
                    } else {
                        printf("Vehicle was not rented.\n");
                    }
                    break;
                }
            }
            if (!found) {
                printf("Vehicle not found.\n");
            }
        }

        else if (choice == 3) {
            printf("\n--- Vehicle List ---\n");
            for (int i = 0; i < n; i++) {
                printf("ID: %d | Rent: %d | Status: %s\n",
                       vehicleID[i],
                       rentPerDay[i],
                       status[i] == 1 ? "Available" : "Rented");
            }
        }

        else if (choice == 4) {
            printf("Exiting...");
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
