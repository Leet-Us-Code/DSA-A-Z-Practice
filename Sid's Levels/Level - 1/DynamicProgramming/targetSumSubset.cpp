//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int tar;
    cin >> tar;
    bool dp[n + 1][tar + 1];
    //initializing the dp array to be false 
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < tar + 1; j++) {
            dp[i][j] = false;
        }
    }
    dp[0][0] = true;
    //the first column will be true aas it indicates 0 sum 
    for (int i = 0; i < n + 1; i++) {
        dp[i][0] = true;
    }
    //the first row other than it's first element will have all false values 

    for (int i = 1; i < tar + 1; i++) {
        dp[0][i] = false;
    }
    //now travel the DP array and precompute
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < tar + 1; j++) {
            //if we are not adding the current element in the subset 
            //then we have to check the previous row to find out whether in the absence of the current element we can make the target sum which is indicated by the column 
            if (dp[i - 1][j] == true) {
                //then it doesnt need to contribute to  the sum
                dp[i][j] = true;
            } else {
                //if we are adding the current element then it will contribute only if the target sum is greater than or equal to the current element othherwise there is no use of adding the current element as the rest will then need to produce a negative sum which is not possible 
                //we are doing i-1 because there is 1 index difference between the rows of dp and the indexes of elements in the array arr
                int val = arr[i - 1];
                if (j >= val) {
                    //after contribution of the current  element check whether the remaining sum can also be performed by the remaining elements
                    //therefore check the previuos row and the remaining sum column box
                    if (dp[i - 1][j - val] == true) {
                        dp[i][j] = true;
                    }
                }
            }
        }
    }
    if (dp[n][tar] == true)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
