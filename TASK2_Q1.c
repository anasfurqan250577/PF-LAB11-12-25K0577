#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter Number of Attributes: ");
    scanf("%d", &n);
    
    double *vectorA = (double*)malloc(n * sizeof(double)); 
    double *vectorB = (double*)malloc(n * sizeof(double));
    
    for(int i=0; i<n; i++){
        printf("Enter Attribute %d for vector A: ", i+1);
        scanf("%lf", &vectorA[i]);
    }
    
    for(int i=0; i<n; i++){
        printf("Enter Attribute %d for vector B: ", i+1);
        scanf("%lf", &vectorB[i]);
    }
    
    double dotProduct = 0;
    for(int i=0; i<n; i++){
        dotProduct += vectorA[i]*vectorB[i];
    }
    
    if(dotProduct > 50) printf("Highly Similar");
    else if(dotProduct >= 20 && dotProduct <= 50) printf("Moderately Similar");
    else if(dotProduct < 20) printf("Low Similarity"); 
    
    free(vectorA);
    free(vectorB);
    vectorA = NULL;
    vectorB = NULL;
    
    return 0;
}
