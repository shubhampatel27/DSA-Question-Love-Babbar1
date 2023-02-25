#include<vector>
using namespace std;

using namespace std;

long long merge(long long *arr, long long s, long long mid, long long e){

long long inv_count = 0;

long long len1 = mid - s +1;

long long len2 = e - mid;

 
// create the index

long long first [len1];

long long second [len2];

//temperoary store value

for(int i = 0; i<len1; i++){

first[i] = arr[ s + i ] ;

}

for(int j = 0; j<len1; j++){

second[j] = arr[ mid + 1 + j] ;

}

//create the index

long long index1 = 0;

long long index2 = 0;

long long main_array = s;

while(index1 < len1 && index2 < len2){

if(first[index1] <= second[index2]){

arr[main_array++] = first[index1++];

 

} else {

arr[main_array] = second[index2];

inv_count += len1 - index1;

main_array++;

index2++;

}

}

while(index1 < len1){

arr[main_array++] = first[index1++];

 

}

while(index2 < len2){

arr[main_array++] = second[index2++];

 

 

}

return inv_count;

}

 

long long mergesort(long long *arr,long long s, long long e){

long long inv_count = 0;

 

if(s>=e){

return 0;

}

long long mid = s + (e - s)/2;

 

//recursive solve;

 

inv_count += mergesort(arr,s,mid);

inv_count += mergesort(arr, mid+1, e);

 

inv_count += merge(arr,s,mid,e);

 

return inv_count;

 

}

long long getInversions(long long *arr, int n){

return mergesort(arr,0,n-1);

 

}