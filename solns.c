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


