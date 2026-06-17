#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int maxValue(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n)
{
    int** dp = new int*[n + 1];

    for(int i = 0; i <= n; i++)
        dp[i] = new int[W + 1];

    for(int i = 0; i <= n; i++)
    {
        for(int w = 0; w <= W; w++)
        {
            if(i == 0 || w == 0)
                dp[i][w] = 0;

            else if(wt[i - 1] <= w)
            {
                dp[i][w] = maxValue(
                    val[i - 1] +
                    dp[i - 1][w - wt[i - 1]],
                    dp[i - 1][w]
                );
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    int result = dp[n][W];

    for(int i = 0; i <= n; i++)
        delete[] dp[i];

    delete[] dp;

    return result;
}

int main()
{
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    int* values = new int[n];
    int* weights = new int[n];

    cout << "Enter values:\n";

    for(int i = 0; i < n; i++)
        cin >> values[i];

    cout << "Enter weights:\n";

    for(int i = 0; i < n; i++)
        cin >> weights[i];

    int capacity;

    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    auto start = high_resolution_clock::now();

    int result =
    knapsack(capacity, weights, values, n);

    auto stop = high_resolution_clock::now();

    auto duration =
    duration_cast<microseconds>(stop - start);

    cout << "\nMaximum Profit = "
         << result << endl;

    cout << "Execution Time: "
         << duration.count()
         << " microseconds\n";

    delete[] values;
    delete[] weights;

    return 0;
}