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
    char ch;
    do {
        
        cout << "\n type the element you wanna search : ";
        int item;
        cin >> item;

        int naufal = 0;
        int wibowo = n - 1;
        int mid;
        bool found = false;

        while (naufal <= wibowo) {
            mid = (naufal + wibowo) / 2;
            if (nfl[mid] == item) {
                found = true;
                break;
            }
            else if (nfl[mid] < item) {
                naufal = mid + 1;
            }
            else {
                wibowo = mid - 1;
            }
        }

        if (found) {
            cout << "\n" << item << " Found at position " << (mid + 1) << endl;
        }
        else {
            cout << "\n" << item << " Not found in the array \n";
        }

        cout << "\n Continue search (y/n) : ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    cout << "\n\nGOOD BYE" << endl;
}

int main() {
    input();
    Algorithm();
    return 0;
}
