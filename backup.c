#include <stdio.h>


void merging(long long int a[],long long int b[], long long int low, long long int mid, long long int high) {
   long long int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(long long int a[],long long int b[], long long int low, long long int high) {
   long long int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(a ,b, low, mid);
      sort(a ,b ,mid+1, high);
      merging(a, b , low, mid, high);
   } else { 
      return;
   }   
}

int main() { 
int t;
scanf("%d",&t);
while(t--){
    long long int n,x;
    int c=0;
    scanf("%lld %lld",&n,&x);

   
    long long int a[n],b[n];
    for(long long int i = 0; i < n; i++)
      scanf("%lld ", &a[i]);

   sort(a, b, 0, n-1);

   
   
    //for(int i = 0; i < n; i++){
    //  printf("%d ", a[i]);}
    //printf("\n");
    
    
    long long int k=0;
    while(k<n){
        if(x==a[k]){
            c+=1;
            k++;
        }
        if(x>a[k]){
            c+=1;
            k++;
            x=x*2;
        }
        else{  
            
            while(x<a[k]){
                x=x*2;
                c+=1;
            }        
             
        }

    }
       
    printf("%d\n",c);  
    
    
    }
}