class Solution {
    boolean solution(String s) {
        boolean answer = true;
        int p=0, y=0;
        s = s.toLowerCase();
        String[] strArray = s.split("");
        for(int i=0; i<s.length(); i++){
            if(strArray[i].equals("p"))
                p++;
            else if(strArray[i].equals("y"))
                y++;
        }
        if(p==y)
            answer=true;
        else answer=false;
  

        return answer;
    }
}