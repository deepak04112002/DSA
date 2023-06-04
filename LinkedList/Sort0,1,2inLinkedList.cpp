//time-O(n)
//space-O(n)
Node* segregate(Node *head) {
        
        // Add code here
        vector<int>v;
        Node*temp=head;
        while(temp){
            int z=temp->data;
            v.push_back(z);
            temp=temp->next;
        }
        int i=0,j=0,k=v.size()-1;
        while(j<=k){
            if(v[j]==0){
            swap(v[j],v[i]);
            i++;
            j++;
            }
            else if(v[j]==1)
            j++;
            else if(v[j]==2){
            swap(v[j],v[k]);
            k--;
            }
        }
        Node*ans=new Node(0);
        Node*t=ans;
        for (int i = 0; i < v.size(); i++) {
            t->data = v[i];
            t->next = (i != v.size() - 1) ? new Node(0) : nullptr;
            t = t->next;
        }
        return ans;
        
    }
//time-O(n)
//space-O(1)
Node* segregate(Node *head) {
        Node*temp=head;
        int cnt0=0;
        int cnt1=0;
        int cnt2=0;
        while(temp){
            if(temp->data==0)
            cnt0++;
            else if(temp->data==1)
            cnt1++;
            else if(temp->data==2)
            cnt2++;
            temp=temp->next;
        }
        temp=head;
        while(temp){
            if(cnt0!=0){
                temp->data=0;
                cnt0--;
            }
            else if(cnt1!=0){
                temp->data=1;
                cnt1--;
            }
            else if(cnt2!=0){
                temp->data=2;
                cnt2--;
            }
            temp=temp->next;
        }
        return head;
        
    }    
