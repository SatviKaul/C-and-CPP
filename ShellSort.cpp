#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

#define MAX_SIZE 5

int main() {
    int arr_sort[MAX_SIZE], i, j, k, a, t;

    cout << "Shell Sort\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Sorting : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_sort[i];

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    for (i = MAX_SIZE / 2; i > 0; i = i / 2) {
        for (j = i; j < MAX_SIZE; j++) {
            for (k = j - i; k >= 0; k = k - i) {
                if (arr_sort[k + i] >= arr_sort[k])
                    break;
                else {
                    //Swapping Values 
                    t = arr_sort[k];
                    arr_sort[k] = arr_sort[k + i];
                    arr_sort[k + i] = t;
                }
            }

            cout << "\nShell Sort Iteration " << i << " : " << j;
            for (a = 0; a < MAX_SIZE; a++) {
                cout << "\t" << arr_sort[a];
            }
        }

    }

    cout << "\n\nSorted Data :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    getch();
}