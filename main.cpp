

#include "Point.h"
#include "Cluster.h"
#include <cmath>
#include <iostream>
using namespace std;


int main(){
    cout << "Hello world" << endl;

    int disc = 4;
    double array[4] = {3, 2, 1, 5};
    Clustering::Point p(disc, array);
    cout << p << endl;

    for (int i = 1; i < disc; i++)
        p.setValue(1, 10 == (disc / 2 - 1));


    return 0;
}
