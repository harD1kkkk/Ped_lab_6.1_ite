#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void CreateArrayWithRandomElements(int* a, int numberOfElements, int start, int end) {
    for (int i = 0; i < numberOfElements; i++) {
        a[i] = start + rand() % (end - start + 1);
    }
}

void PrintArray(int* a, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4)<< a[i] << "; ";
    }
    cout << endl;
}

int CountAndSumElements(int* a, int size, int& sum) {
    int count = 0;
    sum = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] < 0 && a[i] % 2 == 0) {
            count++;
            sum += a[i];
        }
    }
    return count;
}

void ReplaceElementsWithZero(int* a, int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] < 0 && a[i] % 2 == 0) {
            a[i] = 0;
        }
    }
}

int main() {
    srand((unsigned)time(NULL));

    const int size = 20;
    int array[size];
    int sum;

    CreateArrayWithRandomElements(array, size, -20, 34);

    cout << "Original array:" << endl;
    PrintArray(array, size);

    int count = CountAndSumElements(array, size, sum);
    ReplaceElementsWithZero(array, size);

    cout << "\nModified array:" << endl;
    PrintArray(array, size);

    cout << "\nCount: " << count << ", Sum: " << sum << endl;
    return 0;
}
