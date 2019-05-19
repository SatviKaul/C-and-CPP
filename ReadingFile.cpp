#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main() {
    char c, fname[10];
    clrscr();
    cout << "Enter file name:";
    cin>>fname;
    ifstream in(fname);
    if (!in) {
        cout << "File Does not Exist";
        getch();
        return;
    }
    cout << "\n\n";
    while (in.eof() == 0) {
        in.get(c);
        cout << c;
    }
    getch();
}
