public class Quicksort
{
 int partition(int a[],int l,int r)
  {
    int pivot=a[r];
    int pi=l;
  int tem;
    for(int i=l;i<r;i++)
  {
    if(a[i]<pivot)
    {
      tem=a[i];
      a[i]=a[pi];
      a[pi]=tem;
      pi=pi+1;
    }
  }
  tem=a[pi];
  a[pi]=pivot;
  a[r]=tem;
  return pi;


  }
 void quick(int a[],int l,int r)
  {
    if(l>r)
    {
      return;
    }
    int k=partition(a,l,r);
    quick(a,l,k-1);
    quick(a,k+1,r);

  }
  void display(int a[])
  {
    for(int i:a)
    System.out.println(i);

  }
  public static void main(String args[])
  {
    int a[]={1,0,2,0,4,7,8,5,9,6,3,0,30};
    int k=a.length;
    Quicksort q=new Quicksort();
    q.quick(a,0,k-1);
    q.display(a);

  }
}
