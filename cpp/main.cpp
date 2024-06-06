#include <iostream>
#include "hm_1.h"


int main() {
    const int size = 20;
    int arr[size];
    for(int i = 0; i < size; i++) {
        arr[i] = i;
    }
    hm_1 hm;
    //hm.task_2(arr, 12, 0, 20);
    // hm.task_1(arr, size, 3);
    cout << hm.task_3("01011110", 8, 1) << endl;
    return 0;
}
