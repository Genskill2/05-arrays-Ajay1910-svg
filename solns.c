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

int isprime(int i)
{
  int flag=0;
  for(int j=2;j<i;j++)
  {
    if(i%j==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
    return 1;
  else
    return 0;
}

int factors(int a[],int n)
{
  int count=0;
  int i=2;
  while(i<n)
  {
    if(n%i==0)
      if(isprime(i)==1)
      {
        a[count]=i;
        count++;
        n=n/i;
        if(isprime(n)==1)
        {
          a[count++];
          break;
        }
        i=2;
      }
    else continue;
    else
      i++;
  }
  return count;
}
  


