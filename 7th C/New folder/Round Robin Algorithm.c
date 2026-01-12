#include <stdio.h>

int main() {
    int p[10], at[10], bt[10], remaining_bt[10], ct[10], tat[10], wt[10], queue[10], front = 0, rear = 0;
    int i, n, quantum, time = 0, completed = 0;
    float total_tat = 0, total_wt = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter %d process IDs: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Enter %d arrival times: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &at[i]);
    }

    printf("Enter %d burst times: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        remaining_bt[i] = bt[i]; // Initialize remaining burst times
    }

    printf("Enter time quantum: ");
    scanf("%d", &quantum);

    int visited[10] = {0};
    queue[rear++] = 0; // Start with the first process
    visited[0] = 1;

    while (completed < n) {
        int i = queue[front++]; // Dequeue process

        if (remaining_bt[i] > quantum) {
            time += quantum;
            remaining_bt[i] -= quantum;
        } else {
            time += remaining_bt[i];
            ct[i] = time;
            tat[i] = ct[i] - at[i];
            wt[i] = tat[i] - bt[i];
            total_tat += tat[i];
            total_wt += wt[i];
            remaining_bt[i] = 0;
            completed++;
        }

        for (int j = 0; j < n; j++) {
            if (at[j] <= time && remaining_bt[j] > 0 && !visited[j]) {
                queue[rear++] = j;
                visited[j] = 1;
            }
        }

        if (remaining_bt[i] > 0) {
            queue[rear++] = i; // Re-enqueue if process is not finished
        }

        if (front == rear) { // If queue is empty, find the next process
            for (int j = 0; j < n; j++) {
                if (remaining_bt[j] > 0) {
                    queue[rear++] = j;
                    visited[j] = 1;
                    break;
                }
            }
        }
    }

    // Print results
    printf("\nP\tAT\tBT\tCT\tTAT\tWT");
    for (i = 0; i < n; i++) {
        printf("\nP%d\t%d\t%d\t%d\t%d\t%d", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    printf("\n\nAverage Turnaround Time: %.2f", total_tat / n);
    printf("\nAverage Waiting Time: %.2f\n", total_wt / n);

    return 0;
}
