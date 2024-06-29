#include <bits/stdc++.h> 
using namespace std;

/* 
------------------------------
Pointer to structure
*/
// struct Rectangle{j
//     int length;
//     int breadth;
// }*R;

// int main(){
//     R=new Rectangle;
//     R->length=10;
//     R->breadth=14;
//     cout<<R->length<<" "<<R->breadth;
// }

// struct Rectangle{
//     int length;
//     int breadth;
// }R;

// int main(){
//     R.length=10;
//     R.breadth=14;
//     cout<<R.length<<" "<<R.breadth;
// }

/*
-----------------------------------
    Functions 
    1.Pass by value
    2.Pass by address
    3.Pass by reference (only in cpp)
*/
// 1.Pass by value
// void swap(int x,int y){
//     int temp=x;
//     x=y;
//     y=temp;
//     cout<<x<<" "<<y<<"\n";
// }
// int main(){
//     int a=1,b=2;
//     cout<<a<<" "<<b<<"\n";
//     swap(a,b);
//     cout<<a<<" "<<b<<"\n";
// }

// 2.Pass by address
// void swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
//     // cout<<x<<" "<<y<<"\n";
// }
// int main(){
//     int a=1,b=2;
//     cout<<a<<" "<<b<<"\n";
//     swap(&a,&b);
//     cout<<a<<" "<<b<<"\n";
// }

// 3.Pass by reference (only in cpp)
// void swap(int &x,int &y){
//     int temp=x;
//     x=y;
//     y=temp;
//     // cout<<x<<" "<<y<<"\n";
// }
// int main(){
//     int a=1,b=2;
//     cout<<a<<" "<<b<<"\n";
//     swap(a,b);
//     cout<<a<<" "<<b<<"\n";
// }

/*
--------------------------------------------
    Passing Structure as function parameter
*/
// struct rectangle{
//     int length;
//     int breadth;
// };
// //Parameter is passed as reference in void initialize and void changelength
// //  coz we need to initialize/change structure components
// void initialize(struct rectangle *r,int l,int b){
//     r->length=l;
//     r->breadth=b;
// }

// int area(struct rectangle r){
//     return  r.length*r.breadth;
// }
// void changelength(struct rectangle *r,int l){
//     r->length=l;
// }

// int main(){
//     struct rectangle r;
//     initialize(&r,2,5);
//     cout<<r.length<<" "<<r.breadth<<"\n";
//     cout<<area(r)<<"\n";
//     changelength(&r,10);
//     cout<<r.length<<" "<<r.breadth<<"\n";
// }

/*
    Above structure as class
*/
class Rectangle{
    private:
    int length;
    int breadth;
    
    public:
    // void initialize(int l,int b){
    //     length=l;
    //     breadth=b;
    // }
// Instead of the above initlialize function we can use constructor (which is same as class name)
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }


    int area(){
        return length*breadth;
    }

    void changelength(int l){
        length=l;
    }

};

int main(){
    Rectangle r(10,5);
    cout<<r.area()<<" ";
}