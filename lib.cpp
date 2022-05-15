#include "lib.h"
int posizione(char a[20][10], char b[20]){
    for(int i=0;i<10;i++){
        int j=0;
        int c=0;
        while(j<20){
            if(a[j][i]==b[j]){
                c++;
            }
            j++;
        }
        if(c==20){
            return i;
        }
    }
    return -1;
}
