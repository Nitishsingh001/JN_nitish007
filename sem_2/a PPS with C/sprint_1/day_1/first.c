// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int branch_code; 
//  clrscr() 
//     printf("enter your branch code as given below \n"); 

//     printf("Press 1 for cse \n");
//   printf("Press 2 for ec \n");
// printf("Press 3 for electronics \n");
// scanf("%d", &branch_code); 
// if (branch_code =1){
//     printf("\n class no 2"); 
// } else if (branch_code=2){
//      printf("\n class no 3"); 
// } else if(branch_code=3){
//       printf("\n class no 7"); 
// }else {
//      printf("\n enter proper branch "); 
// }

// getch(); 



// }


#include <stdio.h>

int main() {
    int branch_code; 
    
    printf("Enter your branch code as given below: \n"); 
    printf("Press 1 for CSE \n");
    printf("Press 2 for EC \n");
    printf("Press 3 for Electronics \n");
    
    scanf("%d", &branch_code); 
    
    if (branch_code == 1) {
        printf("\nClass no 2"); 
    } 
    else if (branch_code == 2) {
        printf("\nClass no 3"); 
    } 
    else if (branch_code == 3) {
        printf("\nClass no 7"); 
    }
    else {
        printf("\nEnter proper branch"); 
    }

    return 0;
}
