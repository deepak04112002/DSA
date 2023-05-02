#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
}
void print2(int n){
     for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
}
void print3(int n){
    for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
}
void print4(int n){
    for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
}
void print5(int n){
    for(int i=0;i<n;i++){
	        for(int j=n;j>i;j--){
	            cout<<"*"<<" ";
	        }
	        cout<<endl;
	    }
}
void print6(int n){
    for(int i=1;i<=n;i++){
	        for(int j=n;j>=i;j--){
	            cout<<n-j+1<<" ";
	        }
	        cout<<endl;
	    }
}
void print7(int n){
    for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<(2*i)+1;j++){
                cout<<"*";
            }
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }
}
void print8(int n){
    for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            cout<<" ";
	        }
	        for(int j=0;j<(2*n)-(2*i+1);j++){
	            cout<<"*";
	        }
	        for(int j=0;j<i;j++){
	            cout<<" ";
	        }
	        cout<<endl;
	    }
}
void print9(int n){
    //1st half
         for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<(2*i)+1;j++){
                cout<<"*";
            }
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }
        //2nd half
        for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            cout<<" ";
	        }
	        for(int j=0;j<(2*n)-(2*i+1);j++){
	            cout<<"*";
	        }
	        for(int j=0;j<i;j++){
	            cout<<" ";
	        }
	        cout<<endl;
	    }
}
void print10(int n){
        for(int i=1;i<=2*n-1;i++){
            int star = i;
            if(i>n)
            star=2*n-i;
            for(int j=1;j<=star;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
}
void print11(int n){
    int start=1;
        for(int i=0;i<n;i++){
            if(i%2==0)
            start=1;
            else 
            start=0;
            for(int j=0;j<=i;j++){
                cout<<start<<" ";
                start=1-start;
            }
            cout<<endl;
        }
}
void print12(int n){
    for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            for(int j=0;j<(2*n)-(2*i);j++){
                cout<<" "<<" ";
            }
            for(int j=i;j>=1;j--){
                cout<<j<<" ";
                
            }
            cout<<endl;
        }
}
void print13(int n){
    int s=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<s<<" ";
                s++;
            }
            cout<<endl;
        }
}
void print14(int n){
    char alpha='A';
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<char(alpha+j);
            }
            cout<<endl;
        }
}
void print15(int n){
    char alpha='A';
        for(int i=0;i<n;i++){
            for(int j=0;j<=n-i-1;j++){
                cout<<char(alpha+j);
            }
            cout<<endl;
        }
}
void print16(int n){
    char alpha='A';
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<char(alpha+i);
            }
            cout<<endl;
        }
}
void print17(int n){
    for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            char ch='A';
            int breakP= (2*i+1)/2;
            for(int j=1;j<=2*i+1;j++){
                cout<<ch;
                if(j<=breakP) ch++;
                else ch--;
            }
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }
}
void print18(int n){
    for(int i=0;i<n;i++){
            char ch='A';
            for(int j=0;j<=i;j++){
                cout<<char(ch+n-1-j)<<" ";
            }
            cout<<endl;
        }
}
void print19(int n){
    for(int i=0;i<n;i++){
            for(int j=0;j<=n-i-1;j++){
                cout<<"*";
            }
            for(int j=1;j<2*i+1;j++){
                cout<<" ";
            }
            for(int j=0;j<=n-i-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            for(int j=1;j<(2*n)-(2*i+1);j++){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
}
void print20(int n){
    int blank=2*n-2;
        for(int i=1;i<=2*n-1;i++){
            int star=i;
            if(i>=n) star=(2*n)-i;
            for(int j=1;j<=star;j++){
                cout<<"*";
            }
           for(int j=1;j<=blank;j++){
               cout<<" ";
           }
           for(int j=1;j<=star;j++){
                cout<<"*";
           }
           cout<<endl;
           if(i<n) blank-=2;
           else blank+=2;
        }
}
void print21(int n){
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0||i==n-1||j==n-1)
                cout<<"*";
                else
                cout<<" ";
            }
            cout<<endl;
        }
}
void print22(int n){
    for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                int top=i;
                int left=j;
                int right=(2*n-2)-j;
                int bottom=(2*n-2)-i;
                cout<<n-min(min(top,bottom),min(left,right))<<" ";
            }
            cout<<endl;
        }
}


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printx(n);
    }
}
