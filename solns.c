/* Enter your solutions in this file */

max(int x[],int k)
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

min(int a[],int n)
{
  int c,index=0;
  for(c=1;c<n;c++)
  {
    if(a[c]<min)
      index=c;
  }
  return(index);
}


