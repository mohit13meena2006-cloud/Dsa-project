#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    int marks;
};

int main() {
    struct Student s[50], temp;
    int n = 0, choice, i, j, searchRoll;
    int low, high, mid, found;
    int total, highest, lowest;

    while (1) {
        printf("\n--- RESULT ANALYSIS SYSTEM ---\n");
        printf("1. Add Student\n");
        printf("2. Show All & Merit List\n");
        printf("3. Search by Roll No \n");
        printf("4. Result Analysis \n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Roll No: ");
            scanf("%d", &s[n].roll);
            printf("Enter Name : ");
            scanf("%s", s[n].name);
            printf("Enter Marks : ");
            scanf("%d", &s[n].marks);
            n++;
            printf("Record Added!\n");
        }

     
        else if (choice == 2) {
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (s[j].marks < s[j + 1].marks) {
                        temp = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = temp;
                    }
                }
            }
            printf("\n--- MERIT LIST ---\n");
            for (i = 0; i < n; i++) {
                printf("Roll: %d | Name: %s | Marks: %d\n", s[i].roll, s[i].name, s[i].marks);
            }
        }

        else if (choice == 3) {
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (s[j].roll > s[j + 1].roll) {
                        temp = s[j];
                        s[j] = s[j + 1];
                        s[j + 1] = temp;
                    }
                }
            }

            printf("Enter Roll No to search: ");
            scanf("%d", &searchRoll);

            low = 0;
            high = n - 1;
            found = 0;

            while (low <= high) {
                mid = (low + high) / 2;
                if (s[mid].roll == searchRoll) {
                    printf("Found! Name: %s, Marks: %d\n", s[mid].name, s[mid].marks);
                    found = 1;
                    break;
                } else if (s[mid].roll < searchRoll) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            if (found == 0) {
                printf("Student not found!\n");
            }
        }

        else if (choice == 4) {
            if (n == 0) {
                printf("No records available!\n");
            } else {
                total = 0;
                highest = s[0].marks;
                lowest = s[0].marks;

                for (i = 0; i < n; i++) {
                    total = total + s[i].marks;
                    if (s[i].marks > highest) highest = s[i].marks;
                    if (s[i].marks < lowest) lowest = s[i].marks;
                }

                printf("\n--- RESULT ANALYSIS ---\n");
                printf("Total Students : %d\n", n);
                printf("Average Marks  : %d\n", total / n);
                printf("Highest Marks  : %d\n", highest);
                printf("Lowest Marks   : %d\n", lowest);
            }
        }
        else if (choice == 5) {
            break;
        } else {
            printf("Wrong Choice!\n");
        }
    }

    return 0;
}