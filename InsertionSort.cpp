#include <iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 5

using namespace std;

void insertion(int[]);

int main() {
    int arr_sort[MAX_SIZE], i, j, a, t;

    cout << "Insertion Sort\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Sorting : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_sort[i];

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    for (i = 1; i < MAX_SIZE; i++) {
        t = arr_sort[i];
        j = i - 1;

        while (j >= 0 && arr_sort[j] > t) {
            arr_sort[j + 1] = arr_sort[j];
            j = j - 1;
        }
        arr_sort[j + 1] = t;

        cout << "\nIteration : " << i;
        for (a = 0; a < MAX_SIZE; a++) {
            cout << "\t" << arr_sort[a];
        }
    }

    cout << "\n\nSorted Data :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    getch();
}