#include <iostream>
#include <vector>

void insertion_sort(std::vector<int>&);

int main() {
    //...
}

void insertion_sort(std::vector<int>& vec) {
    int size = vec.size();
    int cmp_val;
    int j;

    for (int i = 1; i < size; i++) {
        cmp_val = vec[i];
        j = i - 1;

        while (j >= 0 && vec[j] > cmp_val) {
            vec[j+1] = vec[j];
            --j;
        }
        vec[j+1] = cmp_val;
    }
}