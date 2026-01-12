// Optimal page Replacement Algorithm

#include <stdio.h>

int main() {
    int frames, pages, miss = 0, i, j, k, flag = 0, Hit = 0;

    printf("Enter number of frames: ");
    scanf("%d", &frames);

    printf("Enter number of pages: ");
    scanf("%d", &pages);

    int page_sequence[pages], frame[frames];

    printf("Enter the page sequence:\n");
    for(i = 0; i < pages; i++) {
        scanf("%d", &page_sequence[i]);
    }

    // Initialize all frames to -1
    for(i = 0; i < frames; i++) {
        frame[i] = -1;
    }

    printf("\nPage Replacement Process:\n");
    for(i = 0; i < pages; i++) {
        flag = 0;

        // Check if page is already in frame
        for(j = 0; j < frames; j++) {
            if(frame[j] == page_sequence[i]) {
                flag = 1;
                Hit++;
                break;
            }
        }

        // If not present, do optimal replacement
        if(flag == 0) {
            int index = -1, First = i + 1;

            for(j = 0; j < frames; j++) {
                int found = 0;
                for(k = i + 1; k < pages; k++) {
                    if(frame[j] == page_sequence[k]) {
                        if(k > First) {
                            First = k;
                            index = j;
                        }
                        found = 1;
                        break;
                    }
                }

                if(!found) {    // if 0 condition on
                    index = j; //3
                    break;
                }
            }


            frame[index] = page_sequence[i];
            miss++;

            // Print current state of frames
            for(k = 0; k < frames; k++) {
                if(frame[k] != -1)
                    printf("%d ", frame[k]);
                else
                    printf("- ");
            }
            printf(" (Miss Page)\n");
        }
        else {
            printf(" Page Hit = %d\n", page_sequence[i]);
        }
    }

    float hit_per = ((float)Hit * 100) / pages;
    float miss_per = ((float)miss * 100) / pages;

    printf("\nTotal Misses = %d\n", miss);
    printf("Total Hits = %d\n", Hit);
    printf("Hit Percentage = %.2f%%\n", hit_per);
    printf("Miss Percentage = %.2f%%\n", miss_per);

    return 0;
}

/*
3
20
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
*/
