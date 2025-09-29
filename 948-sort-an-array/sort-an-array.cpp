class Solution {
public:
    void merge(vector<int>&arr, int start, int mid, int end) {
        vector<int> temp(end - start + 1);
        // pointer to the left and right partition arrays(start for left
        // array,mid+1 for right array )
        int left = start, right = mid + 1, index = 0;
        // when both pointer are on the either of the arrays
        while (left <= mid && right <= end) {
            // when the left array element is small or equal to the element of
            // right array pushing it to the temp vector and incrementing left
            // for left array(ele) and right for right array(ele) and the index
            // in both cases
            if (arr[left] <= arr[right]) {
                temp[index] = arr[left];
                index++, left++;
            } else {
                temp[index] = arr[right];
                index++, right++;
            }
        }
        // when element of left array left
        while (left <= mid) {
            temp[index] = arr[left];
            index++, left++;
        }
        // when element of right array left
        while (right <= end) {
            temp[index] = arr[right];
            index++, right++;
        }
        // set index to 0 for the purpose updating the given array with sorted
        // vector
        index = 0;
        while (start <= end) {
            arr[start] = temp[index];
            start++, index++;
        }
    }
    void mergesort(vector<int> &arr, int start, int end) {
        if (start == end) {
            return;
        }
        int mid = start + (end - start) / 2;
        // dividing left array
        mergesort(arr, start, mid);
        // dividing right array
        mergesort(arr, mid + 1, end);

        // merging the divide array element
        merge(arr, start, mid, end);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};