#include <stdio.h>
void main(){
int m1[3][3],m2[3][3],m3[3][3],m4[3][3],m5[3][3];
printf("enter the elements of first matrix\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
scanf("%d",&m1[i][j]);
}
printf("enter the elements of the second matrix\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
scanf("%d",&m2[i][j]);
}
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
m3[i][j]=m1[i][j]+m2[i][j];
}
printf("matrix after addition\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf("%d\t",m3[i][j]);
}
printf("\n");
}
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
m4[i][j]=m1[i][j]-m2[i][j];
}
printf("matrix after subtraction\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf("%d\t",m4[i][j]);
}
printf("\n");
}
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
m5[i][j]=m1[i][j]*m2[i][j];
}
printf("matrix after multiplication\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf("%d\t",m5[i][j]);
}
printf("\n");
}

}

