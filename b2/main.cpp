#include <iostream>

using namespace std;

void inputArr(int n){
    int a[n];
    cout<<"Nhap vao mang: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]="; cin>>a[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    int sum = a[n-1] + a[n-2];
    cout<<sum;
}
int main()
{
    int n;
    do{
        cout << "Nhap vao so phan tu cua mang: "; cin>>n;
        if(n<0)
            cout<<"So phan tu cua mang phai > 0"<<endl;

    }while(n<0);
    inputArr(n);
    return 0;
}
