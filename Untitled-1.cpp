#include <iostream>
#include <vector>
#include <cassert>
#include <limits.h>
#include <limits>


int main() {
    std::vector<int> a={-300,-100,-50,-25,-11, -5,0, 1, 10, 15,101,104,205};
    int posPos=0;
    while (a[0]<0) {
        bool found=false;

        //find positive pos posPos
        for (int i=0;i<a.size() && !found;i++) {
            if (a[i]>0) {
                found=true;
                posPos=i;
            }
        }
        //find positive pos posPos


        for (int i=0;i<posPos ;i++) {
            bool swapped=false;
            for (int j=a.size()-1;j>=posPos && !swapped;j--) {
                if (abs(a[i])>a[j]) {
                    int swp=abs(a[i]);
                    for (int k=i;k<j;k++) {
                        a[k]=a[k+1];
                    }
                    a[j]=swp;
                    swapped=true;
                }
            }
        }







    }
    for (int i=0;i<a.size();i++) {
        std::cout<<a[i]<<std::endl;
    }
    
}