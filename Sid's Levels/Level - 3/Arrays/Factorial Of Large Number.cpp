int multiply(int res[], int x, int res_size)
{
    int carry = 0;
    int prod;
    for(int i = 0; i < res_size; i++)
    {
        prod = res[i]*x + carry;
        carry = prod / 10;
        res[i] = prod % 10;
        
    }
    while(carry)
    {
        res[res_size] = carry % 10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
void fact(int n)
{
    int res[100000];
    res[0] = 1;
    int res_size = 1;
    for(int i = 1; i <= n; i++)
    {
        res_size = multiply(res, i, res_size);
    }
    for(int i = res_size - 1; i >= 0; i--)
    cout << res[i];
}
