//concept involved -> Hashmaps
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    
    bool row[10000], col[10000];
    for(int i = 0; i < 100; i++)
    {
        row[i] = false;
        col[i] = false;
    }
    
    /*while(k--){
        int r,c;
        cin >> r >> c;
        row[r]++; // the entire r row filled 
        col[c]++; // the entire c col filled 
        
        // get no of unfilled cells
        int res = (n - row.size()) * (n - col.size()); // subtracting total no of rows and filled row count to get no. of unfilled rows..similarly cols 
        cout << res << endl;        
    }
    return 0; */  
    int size = n*n;
    for(int i = 0; i < k; i++)
    {
        int r, c;
        cin >> r >> c;
        cout << "The size is : " << size << endl;
        if(row[r] || col[c])
        {
            if(!row[r])
            {
                row[r] = true;
            }
            if(!col[c])
            {
                col[c] = true;
            }
            int operations = i;
            int x, y;
            x = n - operations; // row or col
            y = 0;
            int totalElements = x;
            cout << "Total elements " << totalElements <<endl;
            int empty = size - x;
            size = empty;
            cout<< empty << endl;
        }
        else 
        {
            //find the non empty cells in the row 
            row[r] = true;
            col[c] = true;
            int operations = i;
            int EmptyRows = n - operations; 
            int EmptyCols = n - operations;
            int totalElements = EmptyRows + EmptyCols - 1;
            int empty = size - totalElements;
            size = empty;
            cout << empty << endl;
        }
    }
}
