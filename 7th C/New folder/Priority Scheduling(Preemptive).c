#include <stdio.h>

int main() {
    int p[10], at[10], bt[10], remaining_bt[10], ct[10], tat[10], wt[10], pr[10];
    int completed[10] = {0}, current_time = 0, n, i, max_pr, max_index;
    float total_tat = 0, total_wt = 0;

    printf("Enter number of processes you want: ");
    scanf("%d", &n);

    // Input process IDs
    printf("Enter %d process IDs: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    // Input Arrival Times
    printf("Enter %d arrival times: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &at[i]);
    }

    // Input Burst Times
    printf("Enter %d burst times: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        remaining_bt[i] = bt[i]; // Copy burst times to remaining burst times
    }

    // Input Priorities (higher number indicates higher priority)
    printf("Enter %d priorities (higher number indicates higher priority): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &pr[i]);
    }

    int completed_count = 0;
    while (completed_count < n) {
        max_pr = -1;
        max_index = -1;

        for (i = 0; i < n; i++) {
            if (at[i] <= current_time && completed[i] == 0) { // Process is available
                if (pr[i] > max_pr || (pr[i] == max_pr && at[i] < at[max_index])) {
                    max_pr = pr[i];
                    max_index = i;
                }
            }
        }

        if (max_index == -1) {
            current_time++;
        } else {
            remaining_bt[max_index]--;
            current_time++;

            if (remaining_bt[max_index] == 0) { // Process is completed
                ct[max_index] = current_time;
                tat[max_index] = ct[max_index] - at[max_index];
                wt[max_index] = tat[max_index] - bt[max_index];

                total_tat += tat[max_index];
                total_wt += wt[max_index];

                completed[max_index] = 1;
                completed_count++;
            }
        }
    }

    // Print the result
    printf("\nP\tAT\tBT\tPriority\tCT\tTAT\tWT");
    for (i = 0; i < n; i++) {
        printf("\nP%d\t%d\t%d\t%d\t\t%d\t%d\t%d", p[i], at[i], bt[i], pr[i], ct[i], tat[i], wt[i]);
    }

    // Print average values
    printf("\n\nAverage Turnaround Time: %.2f", total_tat / n);
    printf("\nAverage Waiting Time: %.2f\n", total_wt / n);

    return 0;
}
