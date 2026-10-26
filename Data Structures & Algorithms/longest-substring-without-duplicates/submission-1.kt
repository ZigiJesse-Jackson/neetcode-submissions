class Solution {
    fun lengthOfLongestSubstring(s: String): Int {
        if(s.length<=1) return s.length
        val hset = mutableSetOf<Char>()
        var l = 0; var r = 0; var longest = 0;

        while(r<s.length){
            if(hset.contains(s.get(r))){
                longest = max(longest, r-l);
                while(hset.contains(s.get(r))){
                    hset.remove(s.get(l))
                    l+=1
                }
            }

            hset.add(s.get(r))
            r+=1
        }

        return max(longest, s.length - l)

    }
}
