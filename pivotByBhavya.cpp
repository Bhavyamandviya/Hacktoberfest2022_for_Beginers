#include<iostream>
using namespace std;
bool pivot(int arr[], int s, int e )
{
    
     if(s>e)
        return false;

    int mid = s + (e - s) / 2;
    if(arr[mid]>=arr[0])
    {
        return pivot(arr,mid+1,e);
    }
    else{
        return pivot(arr,s,mid);
    }
    mid = s + (e-s)/2;
    
}

int main()
{
    int arr[8] = {2, 9, 8, 10, 5, 17, 1, 3};
    int size = 8;

    pivot(arr, 0, 8);
    cout<< "pivot is" << endl;

    return 0;

   
}