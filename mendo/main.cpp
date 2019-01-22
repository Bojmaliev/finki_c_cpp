#include <iostream>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
int main(){

    int N,K;

    cin>>N>>K;
    int broevi[N];
    for(int i=0; i<N; i++)cin>>broevi[i];
    bubbleSort(broevi, N);

    for(int i=0; i<N; i++)cout<<broevi[i];

    int prvIndex = N-K-1;

    cout<<broevi[prvIndex+1]-broevi[prvIndex];


}


