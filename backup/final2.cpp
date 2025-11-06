#include<iostream>
int foo(int arr2[5], int* arr2_ptr, int x2, int *x2_ptr) {
    //int new_ptr = x2;
    arr2[0] = 13;
    arr2[3] = 21;
    *(arr2_ptr+1) = 99;
    x2 = 77;
    x2_ptr =&arr2[4];
    *x2_ptr = 55;
    return arr2[2] + x2 + *x2_ptr;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *arr_ptr = arr;
    int x = 9;
    int *x_ptr = &x;
    int sum = foo(arr, arr_ptr, x, x_ptr);
    std::cout << arr_ptr[0] << "|";
    std::cout << arr[1] << "|";
    std::cout << arr[2] << "|";
    std::cout << arr_ptr[3] << "|";
    std::cout << arr[4] << "|";
    std::cout << sum << "|";
    std::cout << *x_ptr;
}