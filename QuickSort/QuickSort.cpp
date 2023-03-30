#include <iostream>
using namespace std;


int arr[20];
int n = 0, cmp_count = 0, mov_count = 0;

void  input() {

    while (true) {                                             
        cout << "masukan elemen/jumlah data array : \n";
        cin >> n;
        if (n <= 20)                                           
            break;                                              
        else {                                                 
            cout << "array hanya bisa memiliki maksimal 20 elemen";
        }
    }

    cout << endl;
    cout << "=================================" << endl;
    cout << "=     masukan elemen array      =" << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++) {                             
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }

}

void swap(int x, int y) {
    int temp;
    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void q_short(int low, int high) {
    int pivot, i, j;
}

int main() {

}