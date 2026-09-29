#ifndef SORTANALYSER_H
#define SORTANALYSER_H

class SortAnalyser {
public:
    void bubbleSort(int arr[], int n, long long& counter);
    void selectionSort(int arr[], int n, long long& counter);
    void insertionSort(int arr[], int n, long long& counter);
};

#endif