//program to find the grade of a student


#include <stdio.h>
#include <stdlib.h>

int main(void) {
         int wt,le,as;
         float grade;
         setbuf(stdout,NULL);

         printf("Enter mark scored by student\n");
         printf("Written test:");
         scanf("%d",&wt);
         printf("Lab exams:");
         scanf("%d",&le);
         printf("Assignments:");
         scanf("%d",&as);

         grade=(float)(wt*70)/100+(float)(le*20)/100+(float)(as*10)/100;
         printf("Grade of the student:%f",grade);
         return EXIT_SUCCESS;
}
