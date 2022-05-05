// Token Pasting Operator: concatenate two tokens into a single token

#include<stdio.h>
#define PASTE(a,b) a##b
#define MARKS(subject) marks_##subject

int main()
{
    int k2=14, k3=25;
    int marks_chem =89, marks_maths=98;
    printf("%d %d\n",PASTE(k,2),PASTE(k,3));
    printf("%d %d\n",MARKS(chem),MARKS(maths));
}
