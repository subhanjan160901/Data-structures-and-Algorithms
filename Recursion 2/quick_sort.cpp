//Perform quick sort using recursion

#include<iostream>
using namespace std;

int Partition(int a[],int l,int u)
{
    int pivot=a[u];
    int pIndex=l;
    
    for(int i=l;i<u;i++)
    {        
        if(pivot>a[i])
        {
            int temp=a[pIndex];
            a[pIndex]=a[i];
            a[i]=temp;
            pIndex++;
        }
    }
    int temp=a[pIndex];
    a[pIndex]=a[u];
    a[u]=temp;
    return pIndex;
}

void qS(int a[],int l,int u)
{
    if(l<u)
    {
        int pIndex=Partition(a,l,u);
        qS(a,l,pIndex-1);
        qS(a,pIndex+1,u);
    }
}

void quickSort(int input[], int size) 
{
  qS(input,0,size-1);
}

int main()
{
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}
