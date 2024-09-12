#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,cnt, quick[5000001],k;
void quickSort(int i, int j)
{
    if(i>=j) return;

    int pivot = quick[(i+j)/2];
    int left = i;
    int right = j;
    while(left<=right){
        while(quick[left]<pivot)
            left++;
        while(quick[right]>pivot)
            right--;
        if(left<=right){
            swap(quick[left],quick[right]);
            left++; right--;
        }
    }
    quickSort(i,right);
    quickSort(left,j);
}
int main() 
{
    scanf("%d %d",&n,&k);
    for(int i = 0; i < n; i++) scanf("%d",&quick[i]);
    quickSort(0,n-1);
    printf("%d\n",quick[k-1]);
}