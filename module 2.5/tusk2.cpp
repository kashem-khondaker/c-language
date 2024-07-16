#include <iostream>

int main() {
    int N, M;
    std::cin >> N;

    // Create array A
    int* A = new int[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::cin >> M;

    // Create array B and copy elements from A
    int* B = new int[M];
    for (int i = 0; i < N; ++i) {
        B[i] = A[i];
    }

    // Delete array A
    delete[] A;

    // Take input for the rest of the elements of array B
    for (int i = N; i < M; i++) {
        std::cin >> B[i];
    }

    // Print array B
    for (int i = 0; i < M; ++i) {
        std::cout << B[i] << " ";
    }
    std::cout << std::endl;

    // Delete array B
    delete[] B;

    return 0;
}
