#include<iostream>
#include<cmath>

using namespace std;
 void smallest_distance(int n){

    int x, a[10000], b[10000], i, j, k = 0, min;

    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";cin >> a[i];
    }

	x = n * (n - 1) / 2;

	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			b[k] = a[i] - a[j];
			k++;
		}

	for(i=0;i<x;i++)
		b[i] = abs(b[i]);

	min = b[0];

	for(i=1;i<x;i++)
		if(b[i] < min)
			min = b[i];

    cout<<"min = "<<min<<endl;

	for(int i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(abs(a[j]-a[i]) == min)
                cout<<"["<<a[i]<<","<<a[j]<<"],";
 }

int main() {
	int n;
	cout<<"Nhap vao so phan tu cua mang: ";cin >> n;
	smallest_distance(n);
}
