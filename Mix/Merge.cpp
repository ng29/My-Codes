#include<bits/stdc++.h>
using namespace std;
void merge(int l[],int r[],int a[]){
	int i=0,j=0,k=0;
	int nl,nr;
	while(i<nl && j<nr){
		if(l[i]<=r[j]){
			a[k]=l[i];
			i++;
		}
		else{
			a[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<nl){
		a[k]=l[i];
		i++;
		k++;
	}
	while(j<nr){
		a[k]=r[j];
		j++;
		k++;
	}
}
void mergesort(int []a){
	int n,i;
	if(n<2)	return;
	int mid=n/2;
	int l[mid],r[n-mid];
	for(i=0;i<mid-1;i++)
	l[i]=a[i];
	for(i=mid;i<n-1;i++)
	r[i-mid]=a[i];
	mergesort(l);
	mergesort(r);
	merge(l,r,a);
}
