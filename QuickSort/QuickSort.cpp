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

    if (low > high)                                                 // langkah 1
        return;

    pivot = arr[low];                                               // langkah 2

    i = low + 1;                                                    // langkah 3
    j = high;                                                       // langkah 4

    while (i <= j){                                                 // langkah 10

        while ((arr[i] <= pivot) && (i <= high)){                   // langkah 5
            i++;                                                    // langkah 6
            cmp_count++;
        }

        while ((arr[j] > pivot) && (j >= low)){                     // langkah 7
            j--;                                                    // langkah 8
            cmp_count++;
        }
        cmp_count++;


        if (i < j) {                                                // langkah 9
            swap(i, j);
            mov_count++;
        }
    }
    if (low < j) {                                                  // langkah 11
        swap(low, j);
        mov_count++;
    }

    q_short(low, j - 1);                                            // langkah 12
    q_short(j + 1, high);                                           // langkah 13
}

int main() {

}