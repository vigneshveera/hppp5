import java.util.*;
import java.util.Scanner;

class Bingreat
{
public static void main(String[] args)
{
int a[]=new int[5];
int i=0;
int b[]=new int[30];
int j=0;
Scanner s=new Scanner();
System.out.println("Enter the array values");
for(i=o;i<5;i++)
{
a[i]=s.nextInt();
}
for(i=o;i<5;i++)
{
while(a[i]>0)
{
b[j++]=a[i]%2;
a[i]=a[i]/2;
}
}
for(j=i-1;j<n;j++)
{
System.out.println(b[j]);
}
for(j=0;j<5;j++)
{
int c[k]=b[j].split("0");
System.out.println("after splitting:" +c[k]);
}
for(k=0;k<5;k++)
{
int len[]=new int[100];
len[]=c[k].length();
System.out.println("length is :" +len[k]);
}
int e=0,f=0;
int temp;
for(e=0;e<5;e++)
{
for(f=0;f<5;f++)
{
if(len[e]>len[f])
{
temp=len[e];
len[e]=len[f];
len[f]=temp;
}
}
}
System.out.println("Array in decreasing order:"+len[f]);
}
}
