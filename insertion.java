public class insertion
{
  public static void main(String[] args) {
  int a[]={0,0,1,1,4,4,7,7,2,2,5,5,8,8,3,3,6,6,9,9,0,0};
  int k;
  for(int i=1;i<a.length;i++)
  {k=a[i];
    for(int j=i-1;j>=0;j--)
    {
      if(a[j]<k)
      {
        a[j+1]=k;
      break;
    }
      else
      {
        a[j+1]=a[j];
      }


    }

  }
  for(int j:a)
  System.out.println(j);
  }
}
