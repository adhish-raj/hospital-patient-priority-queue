#include <stdio.h>
#include <string.h>

#define MAX 100

struct Patient {
    char name[20];
    int priority;
};

struct Patient queue[MAX];
int size = 0;

void addPatient(char name[], int priority) {
    strcpy(queue[size].name, name);
    queue[size].priority = priority;
    size++;

    printf("Patient %s added with priority %d\n", name, priority);
}

void treatNextPatient() {
    if (size == 0) {
        printf("No patients waiting.\n");
        return;
    }

    int highest = 0;

    for (int i = 1; i < size; i++) {
        if (queue[i].priority < queue[highest].priority) {
            highest = i;
        }
    }

    printf("Treating patient: %s (Priority %d)\n",
           queue[highest].name, queue[highest].priority);

    for (int i = highest; i < size - 1; i++) {
        queue[i] = queue[i + 1];
    }

    size--;
}

int main() {
    addPatient("P1", 3);
    addPatient("P2", 1);
    addPatient("P3", 2);
    addPatient("P4", 1);
    addPatient("P5", 3);
    addPatient("P6", 2);

    printf("\n--- Treatment Order ---\n");

    treatNextPatient();
    treatNextPatient();

    printf("\n--- New Emergency Patient ---\n");
    addPatient("P7", 1);

    printf("\n--- Remaining Treatment Order ---\n");

    while (size > 0) {
        treatNextPatient();
    }

    return 0;
}
