#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>

void main() {
    char c, fname[10];
    ofstream out;
    cout << "Enter File name:";
    cin>>fname;
    out.open(fname);
    cout << "Enter contents to store in file (Enter # at end):\n";
    while ((c = getchar()) != '#') {
        out << c;
    }
    out.close();
    getch();
}
