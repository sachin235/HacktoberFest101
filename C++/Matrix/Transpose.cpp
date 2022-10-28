#include<iostream>
using namespace std;

int main()
{

   int sparse_matrix[10][10],transpose_matrix[10][10];
   int m,n,q,t,element;
   int i,j;
   cout<<"Enter the number of rows and columns : ";
   cin>>m>>n;
   t=0;
   cout<<"\nEnter the matrix:\n";
   for(i=1;i<=m;i++)
   {
      for(j=1;j<=n;j++)
      {
	 cin>>element;
	 if(element!=0)
	 {
	    t=t+1;
	    sparse_matrix[t][1]=i;
	    sparse_matrix[t][2]=j;
	    sparse_matrix[t][3]=element;
	 }
      }
   }
   cout<<"\nThe sparse matrix is :\n\nRow\tColumn\tElement";
   cout<<"\n\n"<<m<<"\t"<<n<<"\t"<<t<<"\n\n";
   for(i=1;i<=t;i++)
   {
      cout<<sparse_matrix[i][1]<<"\t"<<sparse_matrix[i][2]<<"\t"<<sparse_matrix[i][3]<<"\n";
   }
   sparse_matrix[0][1]=n; sparse_matrix[0][2]=m; sparse_matrix[0][3]=t;
   q=1;
   if(t>0)
   {
      for(i=1;i<=n;i++)
      {
	 for(j=1;j<=t;j++)
	 {
	    if(sparse_matrix[j][2]==i)
	    {
		transpose_matrix[q][1]=sparse_matrix[j][2];
		transpose_matrix[q][2]=sparse_matrix[j][1];
		transpose_matrix[q][3]=sparse_matrix[j][3];
		q=q+1;
	    }
	 }
      }
   }
   cout<<"\nThe transpose of the sparse matrix :\n ";
   cout<<"\nRow\tColumn\tElement\n\n";
   cout<<sparse_matrix[0][1]<<"\t"<<sparse_matrix[0][2]<<"\t"<<sparse_matrix[0][3]<<"\n\n";
   for(i=1;i<=t;i++)
   {
  cout<<transpose_matrix[i][1]<<"\t"<<transpose_matrix[i][2]<<"\t"<<transpose_matrix[i][3]<<"\n";
   }

}
