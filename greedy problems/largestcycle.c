#include <stdio.h>

int findingLargestCycle(int noOfInputs, int *edges){
    int largestCycle = 0;
    for(int i=0; i<noOfInputs; i++){
        int currentEdge = edges[i];
        int count = 1;
        int nextEdge = edges[currentEdge];

        int n = 0;
        while(currentEdge != nextEdge && n<noOfInputs+1){
            if(nextEdge == -1 || currentEdge == -1){
                count = 0;
                break;
            }

            if(nextEdge != currentEdge){
                count ++;
            }

            nextEdge = edges[nextEdge];
            n++;
        }

        if(count > largestCycle && n != noOfInputs+1){
            largestCycle = count;
        }
    }
    return largestCycle;
}

int main(){
    
    int numberOfInputs;
    scanf("%d", &numberOfInputs);
    int edges[numberOfInputs];
    for(int i=0; i<numberOfInputs; i++){
        scanf("%d", &edges[i]);
    }

    printf("%d", findingLargestCycle(numberOfInputs, &edges[0]));
}

