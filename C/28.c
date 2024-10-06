// Find Minimum Time to Finish All Jobs

// You are given an integer array jobs, where jobs[i] is the amount of time it takes to complete the ith job.

// There are k workers that you can assign jobs to. Each job should be assigned to exactly one worker. The working time of a worker is the sum of the time it takes to complete all jobs assigned to them. Your goal is to devise an optimal assignment such that the maximum working time of any worker is minimized.

// Return the minimum possible maximum working time of any assignment.

 

// Example 1:

// Input: jobs = [3,2,3], k = 3
// Output: 3
// Explanation: By assigning each person one job, the maximum time is 3.
// Example 2:

// Input: jobs = [1,2,4,7,8], k = 2
// Output: 11
// Explanation: Assign the jobs the following way:
// Worker 1: 1, 2, 8 (working time = 1 + 2 + 8 = 11)
// Worker 2: 4, 7 (working time = 4 + 7 = 11)
// The maximum working time is 11.
 

// Constraints:

// 1 <= k <= jobs.length <= 12
// 1 <= jobs[i] <= 107
#include<stdio.h>

int minimumTimeRequired(int* jobs, int jobsSize, int k) {
    int i=0, count=0, max=jobs[0];
    int avgJobTime;
    for(i=0; i<jobsSize; i++){
        count=count+jobs[i];
        if(jobs[i]>max){
            max=jobs[i];
        }
    }
    avgJobTime=count/k;
    if(avgJobTime<=max){
        printf("Max Time: %d",avgJobTime+1);
    }
    else{
        printf("Max Time: %d",avgJobTime);
    }
}

int main(){
    int jobs[100], jobsSize, k, i=0;
    printf("Enter The Size Of Array: ");
    scanf("%d",&jobsSize);
    printf("Enter The Jobs Time Array: ");
    for(i=0; i<jobsSize; i++){
        printf("Enter %d Job Time: ",i+1);
        scanf("%d",&jobs[i]);
    }
    printf("Enter The Number Of Workers: ");
    scanf("%d",&k);
    minimumTimeRequired(jobs, jobsSize, k);
}