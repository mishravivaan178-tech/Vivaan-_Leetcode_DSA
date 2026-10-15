class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches){
        queue<int>q;
        int n=students.size();
        for(int i=0;i<n;i++){
            q.push(students[i]);
        }
        int i=0;
        int r=0;
        while(!q.empty() && r<q.size()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                r=0;
            }
            else{
                q.push(q.front());
                q.pop();
                r++;
            }

        }
        return q.size();
    }
};