#include <iostream>
#include <vector>

void selection_sort(std::vector<int>&);

int main() {
    //...
}

void selection_sort(std::vector<int>& vec) {
    int size = vec.size();
    int min_index;

    for (int i = 0; i < size - 1; i++) {
        min_index = i;

        for (int j = i + 1; j < size; j++) {
            if (vec[j] < vec[min_index])
                min_index = j;
        }
        
        if (min_index != i) {
            std::swap(vec[i], vec[min_index]);
        }
    }
}