// sid 
class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> ans = new ArrayList<>();
        Map<String, List<Integer>> map = new HashMap<>();
        
        for(int i = 0; i < strs.length; i++) {
            String str = strs[i];
            char[] ch = str.toCharArray();
            Arrays.sort(ch);
            String s = new String(ch);

            if(map.containsKey(s)) {
                List<Integer> ls = map.get(s);
                ls.add(i);

                map.put(s, ls);
            } else {
                map.put(s, new ArrayList<>(Arrays.asList(i)));
            }
        }

        for(List<Integer> list : map.values()) {
            List<String> ls = new ArrayList<>();
            for(int i = 0; i < list.size(); i++) {
                ls.add(strs[list.get(i)]);
            }
            ans.add(ls);
        }

        return ans;
    }
}
