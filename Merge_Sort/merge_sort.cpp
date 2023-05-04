#include <iostream>
#include <vector>

void merge_sort(std::vector<int>&, int, int);
void merge(std::vector<int>&, int, int, int);

int main() {
    //...
}

void merge_sort(std::vector<int>& vec, int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;

    merge_sort(vec, left, mid);
    merge_sort(vec, mid + 1, right);
    merge(vec, left, mid, right);
}

void merge(std::vector<int>& vec, int left, int mid, int right) {
    int leftVecSize = mid - left + 1;
    int rightVecSize = right - mid;

    std::vector<int> leftVec(leftVecSize);
    std::vector<int> rightVec(rightVecSize);

    for (int i = 0; i < leftVecSize; ++i) {
        leftVec[i] = vec[left + i];
    }

    for (int j = 0; j < rightVecSize; ++j) {
        rightVec[j] = vec[mid + 1 + j];
    }

    int leftVecIndex = 0;
    int rightVecIndex = 0;
    int mergedVecIndex = left;

    while (leftVecIndex < leftVecSize && rightVecIndex < rightVecSize) {
        if (leftVec[leftVecIndex] <= rightVec[rightVecIndex]) {
            vec[mergedVecIndex++] = leftVec[leftVecIndex++];
        }
        else {
            vec[mergedVecIndex++] = rightVec[rightVecIndex++];
        }
    }

    while (leftVecIndex < leftVecSize) {
        vec[mergedVecIndex++] = leftVec[leftVecIndex++];
    }

    while (rightVecIndex < rightVecSize) {
        vec[mergedVecIndex++] = rightVec[rightVecIndex++];
    }
}