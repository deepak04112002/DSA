//time-O(n*n)//one for emptying the stack and other for inserting in right order
//space-O(n)//for inserting all numbers in correct order
void insert_correct_pos(int x,stack<int>&s){
    if(s.size()==0 || s.top()<x)
    s.push(x);
    else{
        int a=s.top();
        s.pop();
        insert_correct_pos(x,s);
        s.push(a);
    }
}
void reverse(stack<int> &s){
    if(s.size()>0){
    int x=s.top();
    s.pop();
    reverse(s);
    insert_correct_pos(x,s);
    }
}
void SortedStack :: sort()
{
   reverse(s);
}