#include <iostream>
#include "lib.h"
using namespace std;

void init(char a[20][10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            a[j][i]=' ';
        }
    }
}

void init2(char b[20]){
    for(int i=0; i<20; i++){
        b[i]=' ';
    }
}

void inserimento(char a[20][10]){
    for(int i=0;i<10;i++) {
        char c[20];
        init2(c);
        cin >> c;
        for(int j=0;j<20;j++){
            a[j][i]=c[j];
        }
    }
}

void inserimento2(char b[20]){
    cin>>b;
}

int main() {
    char a[20][10];
    char b[20];
    init(a);
    init2(b);
    inserimento(a);
    inserimento2(b);
    if(posizione(a,b)==-1){
        cout<<"non presente";
    }else{
        cout<<posizione(a,b);
    }
    return 0;
}
