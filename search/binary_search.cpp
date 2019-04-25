#include <bits/stdc++.h>
#define N 151 //Size of the array

using namespace std;

int arr[N];

/*
 * @int to_search value to search using the search algorithm
 * Returns the place of the vector that the value is or -1 if not found
 */
int binary_search(int to_search){
    int l = 0;
    int r = N;
    int place = -1;
    while(l < r){
        int m = (l + r)/2;
        if(arr[m] < to_search){
            l = m + 1;
        }
        else if(arr[m] > to_search){
            r = m;
        }
        else{
            place = m;
            break;
        }
    }
    return place;
}