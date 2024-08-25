class Solution {
    fun containsDuplicate(nums: IntArray): Boolean {
        val map = mutableMapOf<Int, Boolean>()
        for (i in nums){
            if(map.get(i) == true){
                return true
            }
            map.put(i, true)
        }
        return false;
    }
}