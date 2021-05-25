//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI  BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
class MinHeap 
{
    int size;
    int arr[];
    public : 
    MinHeap(int arr[], int size);
    void heapify(int i);
    void buildHeap();
}
MinHeap :: MinHeap(int arr[], int size)
{
    this->arr = arr;
    this->size = size;
    build(heap);
}
void MinHeap :: heapify(int i)
{
    if(i >= size/2)
    {
        return;
    }
    else
    {
        int smallest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        if(arr[left] < arr[i])
        {
            smallest = left;
        }
        if(right < left)
        {
            if(arr[smallest] > arr[right])
            smallest = right;
        }
        if(smallest != i)
        {
            swap(arr[smallest], arr[i]);
            heapify(smallest);
        }
    }
}
void MinHeap :: buildHeap()
{
    for(int i = size/2-1; i >= 0; i--)
    heapify(i);
}
vector<int> kLargest(int arr[], int n, int k)
{
    MinHeap *m = new MinHeap(arr, k);
    for(int i = k; i < n; i++)
    {
        if(arr[0] > arr[i])
        continue;
        else
        {
            arr[0] = arr[i];
            m->heapify(0);
        }
    }
    vector<int> res;
    for(int i = 0; i < k; i++)
    {
        res.push_back(arr[i]);
    }
    return res;
}
