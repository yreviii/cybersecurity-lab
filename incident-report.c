//A SOC analyst needs a simple C program that generates a security incident report.

#include <stdio.h>

int main() {
    char incidentID[20];
    char analystName[50];
    int affectedSystems;
    float recoveryCost;
    float downtime;
    float totalCost;
    printf("Enter Incident ID: ");
    scanf("%19s", incidentID);
    printf("Enter Name of Analyst: ");
    scanf("%49s", analystName);
    printf("Enter Number of Systems Affected: ");
    scanf("%d", &affectedSystems);
    printf("Enter Recovery Cost Per System: ");
    scanf("%f", &recoveryCost);
    printf("Enter Total Downtime in Hours: ");
    scanf("%f", &downtime);
    totalCost = affectedSystems * recoveryCost;
    printf("\n\t\t*****\n");
    printf("SECURITY INCIDENT REPORT\n");
    printf("\t\t*****\n");
    printf("Incident ID : %s\n", incidentID);
    printf("Analyst : %s\n", analystName);
    printf("Affected Systems : %d\n", affectedSystems);
    printf("Recovery Cost : %.0f\n", recoveryCost);
    printf("Total Cost : %.0f\n", totalCost);
    printf("Downtime : %.2f hours\n", downtime);
    printf("\t\t*****\n");

    return 0;
}
