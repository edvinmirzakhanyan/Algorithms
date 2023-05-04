#include <iostream>
#include <vector>

void bubble_sort(std::vector<int>&);

int main() {
    //...
}

void bubble_sort(std::vector<int>& vec) {
    int size = vec.size();
    bool sorted;

    for (int i = 0; i < size - 1; i++) {
        sorted = true;
    
        for (int j = 0; j < size - i - 1; j++) {
            if (vec[j] > vec[j+1]) {
                std::swap(vec[j], vec[j+1]);
                sorted = false;
            }
        }
        if (sorted) {
            return;
        }
    }
}