#include <stdio.h>

int main() {
  int x = 51966;
  int *y = &x;
  int **z = &y;

  printf("i of   x is %i\n",  x);	  //i of   x is 51966
  printf("i of  *y is %i\n", *y);	  //i of  *y is 51966
  printf("i of **z is %i\n",**z);	  //i of **z is 51966
  printf("x of  *y is %x\n", *y);	  //p of  *y is cafe
  printf("x of **z is %x\n",**z);	  //p of **z is cafe

  printf("\n");

  printf("p of  &x is %p\n",&x);	  //p of  &x is 0x7ffc50f22bb4
  printf("p of   y is %p\n", y);	  //p of   y is 0x7ffc50f22bb4
  printf("p of  *z is %p\n",*z);	  //p of  *z is 0x7ffc50f22bb4
  printf("p of  &y is %p\n",&y);	  //p of  &y is 0x7ffc50f22bb8
  printf("p of   z is %p\n", z);	  //p of   z is 0x7ffc50f22bb8
  printf("p of  &z is %p\n",&z);	  //p of  &z is 0x7ffc50f22bc0

  printf("\n");
  
  char *cp = "APRICOT";
  printf("%s\n", cp);                //APRICOT prints string
  printf("%s\n", cp+1);              //PRICOT  prints string from second address
  printf("%c\n", *cp);               //A       prints char from address 0
  printf("%c\n", *(cp+1));           //P       prints char from address 0 + 1
  printf("%c\n", *cp+1);             //B       prints (char + 1)

  printf("\n");

  int arr[] = {1, 3, 5, 7};
  int *ptr = &arr[0];
  printf("*ptr        is %d\n", *ptr);        //*ptr        is 1
  printf("ptr[1]      is %d\n", ptr[1]);      //ptr[1]      is 3
  printf("*(arr + 2)  is %d\n", *(arr + 2));  //*(arr + 2)  is 5
  printf("arr[3]      is %d\n", arr[3]);      //arr[3]      is 7
  
  printf("\n");
  
  int a[] = {1, 2, 3, 4};
  int *p = &a;
  *(p++) += 100; 
  *(++p) += 100; 
  for (int i=0; i<4; i++){
      printf("%d ", a[i]);          //101 2 103 4 
  }

 
}
