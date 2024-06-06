//
// Created by ficus on 6/3/24.
//

#include "hm_1.h"
#include <iostream>
#include <string>

using namespace std;

hm_1::hm_1() {
    cout << "hm_1 object created" << endl;
}

hm_1::~hm_1() {
    cout << "GoodBuy";
}


void hm_1::task_1(int arr[], const int size, int key, int index = 0) {
    if(arr[index] == key) {
        cout << "Key found at index: " << index << endl;
        return;
    }
    else {
        index++;
        hm_1::task_1(arr, size, key, index);
    }
}

void hm_1::task_2(int arr[], int key, int min = 0, int max = 0) {
    int mid = (min + max) / 2;
    if(arr[mid] == key) {
        cout << mid << endl;
    }
    else if(arr[mid] > key) {
        hm_1::task_2(arr, key, min, mid);
    }
    else {
        hm_1::task_2(arr, key, mid, max);
    }
}

int hm_1::task_3(string num, int length = 0, int index = 1) {
    int number = (num[length - 1] - '0') * index;
    if (length - 1 == 0) return number;
    return number + hm_1::task_3(num, length - 1, index * 2);
}