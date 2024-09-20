DATA STRUCTURES AND ALGORITHMS 

STREAK = 1

Starting = "20-09-2024" Today = "20-09-2024"  


[ BASICS ]

[ ARRAY ]

1. Basic Array
=> An array is a collection of elements of the same data type stored at contiguous memory locations. It allows efficient access to its elements using an index.

Characteristics:

=> Fixed Size: Arrays have a predetermined size, and once declared, the size cannot be changed.
=> Zero-based Indexing: In most languages (e.g., C++, Java), arrays are indexed startingfrom 0, meaning the first element is at index 0, the second at index 1, and so on.
=> Contiguous Memory: Elements are stored in adjacent memory locations.
=> Random Access: You can access any element in constant time O(1) using the index.

Syntax in C++:
int arr[5] = {1, 2, 3, 4, 5};  // Declares an array of 5 integers

Time Complexity:

    Accessing an element: O(1)
    Searching for an element: O(n) in the worst case (unsorted array).
    Insertion/Deletion: O(n) (since elements may need to be shifted).

2. 2D Array
=> A 2D array is an array of arrays. It is used to store data in a tabular format (like a matrix). In memory, it is stored row by row (row-major order).

Characteristics:
=> Rows and Columns: A 2D array has two dimensions, typically accessed using two indices—arr[i][j].
=> Fixed Size: Like 1D arrays, the size of a 2D array is fixed once declared.

Syntax in C++:
int arr[3][4] = {
    {1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9, 10, 11, 12}
};  // A 3x4 matrix

Time Complexity:

    Accessing an element: O(1)
    Searching, Insertion, Deletion: O(n*m) where n is the number of rows and m is the number of columns.

3. Dynamic Array (e.g., vector in C++)
=> A dynamic array can grow and shrink in size at runtime, unlike a basic array with a fixed size. In C++, this is implemented using the vector container in the STL (Standard Template Library).

Characteristics:
=> Dynamic Size: Automatically resizes when elements are added or removed.
=> Random Access: Like a normal array, elements can be accessed in O(1) time.
=> Amortized Doubling: When the array reaches its capacity, the vector allocates a larger array (usually double the size) and copies elements over.
=> Efficient Insertion/Deletion: Though not as efficient as linked lists for insertions and deletions, vectors provide flexibility with growing and shrinking.

Syntax in C++:
vector<int> vec = {1, 2, 3};   // Declare a vector of integers
vec.push_back(4);              // Add an element to the vector
vec.pop_back();                // Remove the last element

Time Complexity:
    Accessing an element: O(1)
    Inserting or deleting at the end: O(1) amortized.
    Inserting or deleting from the middle: O(n) due to element shifting.

4. Character Array (C-String)
A character array is used to store sequences of characters (strings). In C++, character arrays are null-terminated, meaning the last element of the array is '\0' (the null character).

Characteristics: 
=> Null Termination: A special character '\0' is used to mark the end of the string.
=> Fixed Size: Similar to normal arrays, character arrays have a fixed size.
=> String Manipulation: In C++, functions from the <cstring> library (like strcpy, strlen) are used to manipulate character arrays.

Syntax in C++:
char str[6] = "hello";  // Declares a character array (string) of size 6
Note: Even though "hello" has 5 letters, the array size is 6 to include the null character '\0'.

Time Complexity:
    Accessing a character: O(1)
    Searching: O(n) (finding a specific character or substring)
    Insertion/Deletion: O(n)

6. Multi-Dimensional Arrays
In addition to 1D and 2D arrays, you can have arrays with more dimensions (3D, 4D, etc.). They are rarely used directly, but are useful in applications like 3D graphics or representing data in more than two dimensions.

Syntax for 3D Array in C++:
int arr[3][4][2];  // 3D array with 3 layers, each with a 4x2 matrix

7. Jagged Arrays
A jagged array is an array of arrays where each inner array can have a different size. Unlike 2D arrays, jagged arrays don't require a uniform size for all rows.

Example:
int* arr[3];
arr[0] = new int[2];
arr[1] = new int[4];
arr[2] = new int[3];

8. Pointer Arrays
An array can also store pointers to other data types. This is particularly useful when creating data structures like linked lists or graphs.

Example:
int* arr[5];  // Array of 5 pointers to integers


Key Differences:

=> Static Array: Fixed size, contiguous memory, efficient for small datasets.
=> Dynamic Array (vector): Flexible size, more overhead due to dynamic memory allocation.
=> Character Array: Used for storing strings in C-style with manual memory management.
=> String Class (std::string): Provides dynamic, flexible string handling with built-in functionality.
=> 2D and Multi-Dimensional Arrays: Useful for representing tabular data but are statically sized.
=> Jagged Array: More flexible but harder to manage compared to regular 2D arrays

Summary:

=> Use arrays when you know the size of your dataset and don’t need dynamic resizing.
=> Use vectors when the dataset size is unknown or will change frequently.
=> Use strings (std::string) for safer and more flexible string handling.
=> Use character arrays if you’re working in environments where dynamic memory isn’t available or needed.



