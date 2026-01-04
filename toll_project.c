#include <stdio.h>

#define MAX 5   /* 0-Car, 1-Bus, 2-Truck, 3-Bike, 4-Other */

int vehicleCount[MAX] = {0, 0, 0, 0, 0};

void addVehicle(int choice)
{
    if (choice >= 1 && choice <= 5)
    {
        vehicleCount[choice - 1]++;
        printf("Vehicle added successfully!\n");
    }
    else
    {
        printf("Invalid vehicle type!\n");
    }
}

void showReport()
{
    int total = 0;
    int i;

    printf("\n--- Toll Booth Report ---\n");
    printf("Bikes   : %d\n", vehicleCount[0]);
    printf("Trucks  : %d\n", vehicleCount[1]);
    printf("BUses : %d\n", vehicleCount[2]);
    printf("Cars  : %d\n", vehicleCount[3]);
    printf("Others : %d\n", vehicleCount[4]);

    for (i = 0; i < MAX; i++)
    {
        total += vehicleCount[i];
    }

    printf("Total Vehicles: %d\n", total);
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Toll Booth Menu =====\n");
        printf("1. Add Bikes\n");
        printf("2. Add Trucks\n");
        printf("3. Add Buses\n");
        printf("4. Add Cars\n");
        printf("5. Add Other Vehicle\n");
        printf("6. Show Report\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            addVehicle(choice);
        }
        else if (choice == 6)
        {
            showReport();
        }
        else if (choice == 0)
        {
            printf("Exiting program...\n");
        }
        else
        {
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
