//Name: Varnika Maurya
//PRN: 24070123160
//Exp No.: 20
//Program No.: 3
#include<iostream>
using namespace std;
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int elements;
    cout<<"How many elements in the array? :";
    cin>>elements;
    int array[elements];
    cout<<"Enter elements:";
    for(int i=0;i<elements;i++){
        cin>>array[i];
    }
    for(int i=0;i<elements;i++){
        cout<<array[i]<<" ";
    }
    int n=0;
    while(n!=elements){
        for(int i=0;i<elements-n;i++){
            if(array[i]>array[i+1]){
                swap(&array[i],&array[i+1]);
            }
        }
        n++;
    }
    cout<<"\nSorted array is:"<<endl;
    for(int i=0;i<elements;i++){
        cout<<array[i]<<" ";
    }
    return0;
}

/* Output:
Enter elements: 12
  34
  67
  22
  89
  12 34 67 22 89
  Sorted array is: 12 22 34 67 89
  */
