#include <iostream>
#include <vector>

int binary_search_iterative(std::vector<int>&, int, int, int);
int binary_search_recursive(std::vector<int>&, int, int, int);

int main() {
    //...
}

int binary_search_iterative(std::vector<int>& vec, int begin, int end, int val) {
    while (begin <= end) {
        int mid = begin + (end - begin) / 2;

        if (vec[mid] == val) {
            return mid;
        }
        else if (vec[mid] > val) {
            end = mid - 1;
        }
        else {
            begin = mid + 1;
        }
    }

    return -1;
}

int binary_search_recursive(std::vector<int>& vec, int begin, int end, int val) {
    if (begin > end) {
        return -1;
    }

    int mid = begin + (end - begin) / 2;

    if (vec[mid] == val) {
        return mid;
    }
    else if (vec[mid] > val) {
        return binary_search_recursive(vec, begin, mid - 1, val);
    }
    else {
        return binary_search_recursive(vec, mid + 1, end, val);
    }
}