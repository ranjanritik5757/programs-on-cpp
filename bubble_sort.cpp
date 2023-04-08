//BUBBLE SORT(OPTIMISED)
// PUSH MAX ELEMENT TO LAST WITH EACH ITERATION


//BUBBLE SORT USING LOOPS
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=1;i--){
        int didSwap=0;
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0){
                break;
            }
    }
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}


//BUBBLE SORT USING RECUSRION
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int low,int high){
    if(high==0) return;
    for(int i=0;i<=high;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    bubbleSort(a,0,high-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubbleSort(a,0,n-1);
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
    return 0;
}