#include <iostream>
using namespace std;


int arr[20];
int n = 0, cmp_count = 0, mov_count = 0;

void  input() {

    while (true) {                                              //looping
        cout << "masukan elemen/jumlah data array : \n";
        cin >> n;
        if (n <= 20)                                            // n <= 20
            break;                                              // keluar looping
        else {                                                  // n > 20
            cout << "array hanya bisa memiliki maksimal 20 elemen";
        }
    }

    cout << endl;
    cout << "=================================" << endl;
    cout << "     masukan elemen array        " << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++) {                                // looping memasukan data ke array
        cout << "masukan data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }

}



int main() {

}