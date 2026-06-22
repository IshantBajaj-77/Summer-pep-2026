#include <bits/stdc++.h>
using namespace std;
int main() {
    char grade='E';
    switch (grade)
    {
    case 'A':
        cout<<"Excellent!"<<endl;
    case 'B':
        cout<<"Well done!"<<endl;
    case 'C':
        cout<<"Good!"<<endl;
    default:
        cout<<"Invalid grade!"<<endl;
    }
}