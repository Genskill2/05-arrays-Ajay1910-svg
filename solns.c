/* Enter your solutions in this file */

int max(int x[],int k)
{
  int t,i;
  t=x[0];
  for(i=1;i<k;i++)
  {
    if(x[i]>t)
      t=x[i];
  }
  return(t);
}

int min(int a[],int n)
{
  int c,index=0;
  for(c=1;c<n;c++)
  {
    if(a[c]<min)
      index=c;
  }
  return(index);
}

 float average(int a[],int n)
 {
   int i;
   float sum=0;
   for(i=0;i<n;i++)
   {
     sum=sum+a[i];
   }
   return(sum/n);
 }

 int mode(int a[],int n)
 {
   int maxvalue=0,maxcount=0,i,j;
   for(i=0;i<n;++i)
   {
     int count=0;
     for(j=0;j<n;++j)
     {
       if(a[j]==a[i])
         ++count;
     }
     if(count>maxcount)
     {
       maxcount=count;
       maxvalue=a[i];
     }
   }
   return(maxvalue);
 }

int factor(int a[],int n)
{
  


