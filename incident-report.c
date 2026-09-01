//A SOC analyst needs a simple C program that generates a security incident report.

#include <stdio.h>

int main() {
    int incidentID;
    char analyst[20];
    int affectedSystems;
    float recoveryCost;
    float downtime;
    float totalCost;

    printf("Enter Incident ID: ");
    scanf("%d", &incidentID);

    printf("Enter Analyst Name: ");
    scanf("%s", analyst);

    printf("Enter Affected Systems: ");
    scanf("%d", &affectedSystems);

    printf("Enter Recovery Cost: ");
    scanf("%f", &recoveryCost);

    printf("Enter Downtime: ");
    scanf("%f", &downtime);

    totalCost = affectedSystems * recoveryCost;

    printf("\n=================================\n");
    printf("SECURITY INCIDENT REPORT\n");
    printf("=================================\n");
    printf("Incident ID : %d\n", incidentID);
    printf("Analyst : %s\n", analyst);
    printf("Affected Systems : %d\n", affectedSystems);
    printf("Recovery Cost : %.0f\n", recoveryCost);
    printf("Total Cost : %.0f\n", totalCost);
    printf("Downtime : %.2f hours\n", downtime);
    printf("=================================\n");

    return 0;
}
