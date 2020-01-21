#include <bits/stdc++.h>
using namespace std;

bool can(int i) {

    int k = i;
    bool deucerto = true;
    int runner = 0;

    for(int j = 0; j < A.size(); j++) {
        if(A[j] == B[runner]) {
            k--;
        }

        if(j == A.size()-1 && k > 0) {
            deucerto = false;
        }

        if(k == 0) {
            k = i;
            runner++;
        }


    }
    return deucerto;
}


