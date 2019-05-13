public class Mergesort
{
  void merge(int a[],int l,int m,int r)
  {
    int nl=m-l+1;
    int nr=r-m;
    int L[]=new int[nl];
    int R[]=new int[nr];
    for(int i=0;i<nl;i++)
    L[i]=a[l+i];
    for(int i=0;i<nr;i++)
    R[i]=a[m+i+1];
    int i,j,k;
    i=j=0;
    k=l;
    while(i<nl && j<nr)
    {
      if(L[i]<=R[j])
      {
        a[k]=L[i];
        i++;
      }
      else
      {
        a[k]=R[j];
        j++;
      }
      k++;
    }
      while(i<nl)
      {
        a[k]=L[i];
        i++;
        k++;
      }
      while(j<nr)
      {
        a[k]=R[j];
        j++;
        k++;
      }


  }
  void sort(int a[],int l,int r)
  {
    if(l<r)
    {
      int m=(r+l)/2;
      sort(a,l,m);
      sort(a,m+1,r);
      merge(a,l,m,r);
    }
  }
  void display(int a[])
  {
    for(int i:a)
    System.out.println(i);
  }
public static void main(String[] args)
{
    int a[]={11,0,1,14,7,02,5,8,0,3,6,9,30};
    int k=a.length;
    System.out.println(k);
    //sort(a,0,k);
    Mergesort q=new Mergesort();
    q.sort(a,0,k-1);
    q.display(a);
}
}
