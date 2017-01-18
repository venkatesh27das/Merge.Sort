#include<iostream>
using namespace std;
void merge(int a[],int p,int q,int r)
{
    int n1,n2,L1[100],L2[100],i,j,k;
    n1=q-p+1;
    n2=r-q;
    for(i=0;i<n1;i++)
        L1[i]=a[p+i];
    for(i=0;i<n2;i++)
    L2[i]=a[i+q+1];
    i=0;
    j=0;
    for(k=p;k<=r;k++)
    {
        if(L1[i]<=L2[j])
        {
        a[k]=L1[i];
        i++;
        }
        else
        {
            a[k]=L2[j];
        j++;
        }
    }
}
void merge_sort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }
}
int main()
{
    int a[100],i,s;
    cout<<"entre array size"<<endl;
    cin>>s;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    merge_sort(a,0,s-1);
    cout<<"Your sorted array is"<<endl;
    for(i=0;i<s;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;

}
