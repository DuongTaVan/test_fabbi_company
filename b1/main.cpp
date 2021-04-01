#include <iostream>

using namespace std;

void inputArr(int n){
    int a[n*3];
    cout<<"Nhap vao mang"<<endl;
    for(int i=0; i<n*3; i++){
        cout<<"a["<<i<<"]="; cin>>a[i];
    }
    for(int i=0; i<n; i++)
        for(int j=i; j<n*3; j+=n)
            cout<<a[j] << "  ";
}
int main()
{
    int n;
    do{
        cout << "Nhap vao n: "; cin>>n;
        if(n<0)
            cout<<"n phai > 0"<<endl;

    }while(n<0);
    inputArr(n);
    return 0;
}
