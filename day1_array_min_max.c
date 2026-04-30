#include<stdio.h>
int main(){
  int a[50],n,i,largest,smallest;
printf("Enter the number of element:");
scanf("%d",&n);
printf("Enter elements:\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
laegest = smallest = a[0];

for(i=1;i<n;i++){
if(a[i]>largest)
  largest = a[i];
if(a[i] < smallest)
  smallest = a[i];
}

printf("Smallest element = %d\n", smallest);
printf("Largest element = %d\n", largest);

return 0;
}
