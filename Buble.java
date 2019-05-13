public class Buble
{
public static void main(String args[])
{
  int tem,i,j;
  int a[]={1,2,3,5,9,8,7,4,5,0,12,1,2,3,6,5,9,5,6,3,2,5,4,8,5,2,2,9};
  int n=a.length;
  for(i=0;i<n;i++)
  {
  for(j=0;j<n-1-i;j++)
  {
    if(a[j]<a[j+1])
    {
      tem=a[j+1];
      a[j+1]=a[j];
      a[j]=tem;
    }
  }
}
  for(int k:a)
  System.out.println(k);
}
}
