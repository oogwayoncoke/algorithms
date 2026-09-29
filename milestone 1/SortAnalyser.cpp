#include <iostream>
#include <algorithm>
#include "SortAnalyser.h"
using namespace std;
void SortAnalyser::bubbleSort(int arr[], int n, long long& counter) {
for (int i = 0; i < n-1; i++) {
for (int j = 0; j < n-1-i; j++) {
counter++; // count comparison
if (arr[j] > arr[j+1])
swap(arr[j], arr[j+1]);
}
}
}
void SortAnalyser::selectionSort(int arr[], int n, long long& counter) {
  int minIndex;
  for(int i=0;i<n-1;i++){
     minIndex=i;
     for(int j=i;j<n-1;j++){
      counter++;  
      if(arr[j]<minIndex){
        minIndex=j;
      }

    }
    swap(arr[minIndex], arr[i]);
  }
}
void SortAnalyser::insertionSort(int arr[], int n, long long& counter) {
  for(int i=1;i<n-1;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
      counter++;
      swap(arr[j],arr[j+1]);
      j=j-1;
    }
  }
}



