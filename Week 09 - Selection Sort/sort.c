#import <stdio.h>
#define N 5

void sort(int arr[]);
void get_values(int arr[]);

/*
 * Function Title: main
 * Inputs: None
 * Outputs: None
 *
 * Main function calls get_values() to fill an array, then calls sort() to
 * sort the array using selection sort
 */
int main(void) {

    // Create an array length N, and call a function to populate it with values
    int arr[N];
    get_values(arr);

    // Call sort() to sort the values in the array
    sort(arr);

    // Print the array
    for (int i=0; i<N; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n");

    // End
    return 0;
}


/*
 * Function Title: get_values
 * Inputs: int arr[]: an array to populate with values from the user
 * Outputs: None
 *
 * Function prompts the user to enter N integers, then stores them in the array.
 * The function does not have a return value, because arrays are pass by
 * reference, so the original array gets updated.
 */
void get_values(int arr[]) {

    // Ask the user to enter N values
    printf("\nEnter %d integers: ", N);

    // Scan the values sequentially into an array
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
}


/*
 * Function Title: sort
 * Inputs: int arr[]: an array to sort
 * Outputs: None
 *
 * The function sorts the array using the selection sort algorithm. The function
 * does not have a return value, because arrays are pass by reference, so the
 * original array gets updated.
 */
void sort(int arr[]) {

    // Begin with the start index at 0, then move it up by one each time
    for (int start_idx=0; start_idx<N-1; start_idx++) {

        // Reset the min index to be at the start
        int min_index = start_idx;

        // Find index containing the smallest value in unsorted part of array
        for (int j=start_idx+1; j<N; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Move the smallest number to the start index by swapping
        int temp = arr[start_idx];
        arr[start_idx] = arr[min_index];
        arr[min_index] = temp;
    }
}