#include <iostream>
using namespace std;

int nfl[35]; // jml 2 nim(7+5) + jml tgl hari ini (1+2) + 20 - 4 x 5 + 10 + 5 + 2 + 3 = 35
int n;

void input() {
    while (true) {
        cout << "enter the length of the array element : ";
        cin >> n;
        if ((n > 0) && (n <= 35)) {
            break;
        }
        else {
            cout << "\n======================================\n\n";
            cout << "\n minimum array 1 and maximum array 35 \n\n";
            cout << "\n======================================\n\n";
        }
    }


    cout << "\n-------------------\n";
    cout << "\n   enter  array \n";
    cout << "\n-------------------\n";
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << "). ";
        cin >> nfl[i];
    }
}

void Algorithm() {
    char next;
    do {
        int des;
        cout << "\n enter array you want to search : ";
        cin >> des;

        int naufal = 0; //lowerbound diubah menjadi nama awal, (naufal) satria wibowo
        int wibowo = n - 1; //upperbound diubah menjadi nama akhir, naufal satria (wibowo)
        int mid = (naufal / wibowo) / 2;

        bool found = false;

        while (naufal <= wibowo) {
            //Set mid = (lowerbound + upperbound)/2
            if (nfl[mid] == des) { //step 5
                found = true;
                break;
            }
            else if (nfl[mid] < des) {
                naufal = mid + 1; //step 7
            }
            else {
                wibowo = mid - 1; //step 6
            }
        }

        if (found) { //step 8
            cout << "\n" << des << " found. on potition : " << (mid + 1) << endl;
        }
        else {
            cout << "\n" << des << " not found \n";
        }

        cout << "\n continue? (y/n) : ";
        cin >> next;

    } while (next == 'y' || next == 'Y');
}

int main() {
    input();
    Algorithm();
    return 0;
}