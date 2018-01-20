#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100], freq[100],a;
    int size, i, j, count;
    cin>>size;
    for(i=0; i<size; i++){
        cin>>arr[i];
        freq[i] = -1;
    }
    for(i=0; i<size; i++){
        count = 1;
        for(j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0){
            freq[i] = count;
        }
    }
	//sort(freq,freq+size);
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(freq[i]<freq[j]){
				a=freq[i];
				freq[i]=freq[j];
				freq[j]=a;
			}
		}
	}
    for(i=0; i<size; i++){
        if(freq[i] != 0){
            cout<<freq[i]<<endl;
        }
    }

}
