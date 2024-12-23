#include <iostream>
#include <vector>

int main() {
    // Create a 2D vector with different row sizes
    std::vector<std::vector<int>> jaggedVector = {
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9}
    };

    // Row-wise access
    for (size_t row = 0; row < jaggedVector.size(); ++row) {
        std::cout << "Row " << row + 1 << ": ";
        for (size_t col = 0; col < jaggedVector[row].size(); ++col) {
            std::cout << jaggedVector[row][col] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}

