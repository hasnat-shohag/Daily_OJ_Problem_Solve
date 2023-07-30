#include <bits/stdc++.h>
#include <time.h>

int main() {
    clock_t start_time, end_time;
    double time_taken;
    int counter = 0;

    start_time = clock(); // Record the start time

    // Your loop here
    while ((double)(clock() - start_time) / CLOCKS_PER_SEC < 1.0) {
        counter++;
    }

    end_time = clock(); // Record the end time

    time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Loop executed %d times in %lf seconds.\n", counter, time_taken);

    return 0;
}
