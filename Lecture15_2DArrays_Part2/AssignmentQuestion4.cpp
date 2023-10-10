#include "iostream"
using namespace std;
// Incomplete
//  Given a positive integer n, generate n*n matrix filled with elements from 1 to n2 in spiral order.
//  Input 1: n = 3
//  Output 1: [[1,2,3],[8,9,4],[7,6,5]]
//  Input 2: n = 1
//  Output 2: [[1]]

int main(){
    int n;
    cout<<"\nEnter The Order Of The Square Matrix :\n";
    cin>>n;
    int arr[n][n];
    int br=0,nr=n-1,bc=0,nc=n-1;
    for (int count=1;count<=n*n;count++){
        // Left To Right
        for(int i=bc;i<nc;i++) {
            arr[br][i]=count;
            count++;
        } br++;

        // Top To Bottom
        for(int i=br;i<nr && count<=n*n;i++){
            arr[i][nc]=count;
            count++;
        } nc--;

        // Right To Left
        for(int i=nc;i>bc && count<=n*n;i--){
            arr[nr][i]=count;
            count++;
        } nr--;

        // Bottom To Top
        for(int i=nr;i>br && count<=n*n;i--) arr[i][bc]=count;
        bc++;
    }
    cout<<"\nThe Required Matrix Is As Follows \n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";
    system("pause");
}