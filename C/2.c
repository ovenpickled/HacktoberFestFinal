// Container With Most Water

// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

 

// Example 1:


// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1
 

// Constraints:

// n == height.length
// 2 <= n <= 105
// 0 <= height[i] <= 10^4
#include <stdio.h>

int maxArea(int* height, int heightSize) {
    int max_area = 0;
    int left = 0;
    int right = heightSize - 1;

    while (left < right) {
        
        int current_height = (height[left] < height[right]) ? height[left] : height[right];
        int current_width = right - left;
        int current_area = current_height * current_width;

        
        if (current_area > max_area) {
            max_area = current_area;
        }


        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main()
{
    int height[] = {1,8,6,2,5,4,8,3,7};
    int size = (sizeof(height)/sizeof(height[0]));
    int results = maxArea(height,size);
    printf("output is %d", results);
    
}
