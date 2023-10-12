#include<math.h>
#include<stdio.h>
int main() {

    double a, b, c, discriminant, root1, root2, realPart, imagePart;
    printf("Enter coefficient a, b and c");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0){
	    root1 = (-b + squrt(discriminant)) / (2 * a);
	    root2 = (-b - squrt(discriminant)) / (2 * a);
	    printf("root1 = %.2lf and root2 = %.2lf",root1, root2);
   }
   
   else if (discriminant == 0){
   	root1 = root2 = -b/ (2 * a);
   	printf("root1 =root2 = %.2lf;", root1);
   }
   
   else{
    realPart = -b / (2 * a);
    imagePart = sqrt( -discriminant) / (2 * a);
    printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi", realPart,imagePart, realPart, imagePart);
 }
      return 0;
}
