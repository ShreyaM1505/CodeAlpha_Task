#include<stdio.h>
int main(){
    int m;
    int n;
    printf("Enter No. of rows of Matrix A :\n");
    scanf("%d" ,&m);
     printf("Enter No. of columns of Matrix A :\n");
    scanf("%d" ,&n);

    int p;
    int q;
     printf("Enter No. of rows of Matrix B:\n");
    scanf("%d" ,&p);
     printf("Enter No. of rows of Matrix A :\n");
    scanf("%d" ,&q);
    int A[m][n];
    int B[p][q];
    printf("Enter Matrix a:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter element of (%d,%d) index: " ,i+1 ,j+1);
            scanf(" %d" ,&A[i][j]);
        }
    }
    // input of matrix a
    printf("Matrix a is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           
          printf("%d  " ,A[i][j]);
        }
        printf("\n");
    }
    // input of matrix b
    printf("Enter Matrix b:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("Enter element of (%d,%d) index: " ,i+1 ,j+1);
            scanf(" %d" ,&B[i][j]);
        }
    }
    printf("Matrix b is:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
           
          printf("%d  " ,B[i][j]);
        }
        printf("\n");
    }
    // Addition of matrix
    if(m!=p&&n!=q){
        printf("Addition is not possible!");
    }
    else{
    int Add[3][3];
    printf("Addition of Matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            Add[i][j]=A[i][j]+B[i][j];
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          printf("%d  " ,Add[i][j]);
        }
        printf("\n");
    }
}


  //Transpose of Matrix a
    printf("Transpose of matrix A:\n");
      for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
          printf("%d  " ,A[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix B:\n");
      for(int j=0;j<q;j++){
        for(int i=0;i<p;i++){
          printf("%d  " ,B[i][j]);
        }
        printf("\n");
    }
    // multiplication 
    if(n!=p){
        printf("No Multiplication is Possible!\n");

    }
    else{
    int res[n][p];
   

    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            res[i][j]=0;
            for(int k=0;k<p;k++){
                res[i][j]+=A[i][k]*B[k][j];
            }

        }
    }

    printf("multiplication of given matrices is : ");

     for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            
            printf("%d " ,res[i][j]);

        }
        printf("\n");
    }
}
}



