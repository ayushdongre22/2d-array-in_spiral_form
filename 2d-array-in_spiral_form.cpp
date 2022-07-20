#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){cin>>arr[i][j];}
    }
    int c=0;
    int k=0;
    while(k<m*n){
        for(int j=c;j<m-c && k<m*n;j++){cout<<arr[c][j]<<" "; k++;}
        for(int i=c+1;i<n-c && k<m*n;i++){cout<<arr[i][m-c-1]<<" "; k++;}
        for(int j=m-c-2;j>=c && k<m*n;j--){cout<<arr[n-c-1][j]<<" "; k++;}
        for(int i=n-c-2;i>c && k<m*n;i--){cout<<arr[i][c]<<" "; k++;}
        c++;
    } 
    return 0;
}