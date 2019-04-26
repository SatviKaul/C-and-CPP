#include <iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 5

using namespace std;

int main() {
    int arr_sort[MAX_SIZE], i, j, a, t, p;

    cout << "Selection Sort\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Sorting : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_sort[i];

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    for (i = 0; i < MAX_SIZE; i++) {
        p = i;
        for (j = i; j < MAX_SIZE; j++) {
            if (arr_sort[p] > arr_sort[j])
                p = j;
        }

        if (p != 1) {
            //Swapping Values 
            t = arr_sort[i];
            arr_sort[i] = arr_sort[p];
            arr_sort[p] = t;
        }
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