/**
 * ===============================================
 * @file        assignment02.cpp
 * @path        /code/DSA/problems/lab_assignments
 * @author      Om Khalane
 * @created     2025-08-11
 * @updated     2025-08-11
 *
 * @description  N/A
 *
 * @tech        cpp
 *
 * @notes       N/A
 * ===============================================
 */

// You work for an online retail company that manages thousands of product
// listings every day. The system needs to display product prices in ascending
// order quickly when customers filter by price, to help them find affordable
// options easily. Write a program for above scenario.

#include <bits/stdc++.h>
using namespace std;

int partition(vector<double> &prices, int low, int high)
{
    double pivot = prices[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (prices[j] <= pivot)
        {
            i++;
            swap(prices[i], prices[j]);
        }
    }
    swap(prices[i + 1], prices[high]);
    return i + 1;
}

void quickSort(vector<double> &prices, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(prices, low, high);
        quickSort(prices, low, pIndex - 1);
        quickSort(prices, pIndex + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    vector<double> prices(n);
    cout << "Enter product prices:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    quickSort(prices, 0, n - 1);

    cout << "\nPrices in ascending order:\n";
    for (double price : prices)
    {
        cout << fixed << setprecision(2) << price << " ";
    }
    cout << endl;

    return 0;
}
