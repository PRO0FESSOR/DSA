#include <iostream>
#include <cstring>  // For memset

int main() {
    int arr[5];

    // Initialize the array to 0 using memset
    memset(arr, 0, sizeof(arr));

    // Print the initialized array
    for(int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

