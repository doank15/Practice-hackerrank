     /* 
     Ngan xep(Last in First Out)
    
     to create a stack, we must include the <stack> header file in our code. 
     we then use this syntax to define the std::stack
     template <class type, class container=deque<type>> class stack;
     +type: is the type of element contained in the std::stack. it can be any valid c++ type or even a user-defined type

     push() - it add an item into the stack
     pop() - it removes an item from the stack
     peek() - return the top item of the stack without removing it
     isFull - checks whether a stack is full 
     isEmpty - checks whether a stack is empty
     */
#include<bits/stdc++.h>
using namespace std; 
int top =-1;
//kiểm tra ngăn xếp đã đầy hay chưa

bool IsFull(int capacity )//capacity là số phần tử của stack ; 
{
    if(top>=capacity-1) // 0 ---> n-1; // top đang bằng capacity - 1
    {
        return true;
    }
    else{
        return false;
    }
}

 // kiểm tra ngăn xếp rỗng

bool IsEmpty()
{
    if(top==-1) // nếu top =-1 thì ngăn xếp không có gì
    {
        return true;
    }
    else{
        return false;
    }
}
// thêm phần tử vào đỉnnh stack (push)

void Push(int stack[], int capacity, int value)
{  
// chỉ có thể thêm phần tử(push) vào stack khi stack chưa đầy, khi thêm ta tăng biến top lên 1 đơn vị và gán giá trị cho biến top 
// last in first out
    if(IsFull(capacity)==true)
    {
        cout<<"\nStack is full. Overflow condition";
    }
    else{
        ++top;
        stack[top]=value;
    }
}
// xóa phần tử khỏi đỉnh stack(pop) 
void Pop()
{
    // chỉ có thể xóa(pop) khỏi đỉnh stack khi stack không trống, nêú trống đưa ra thông báo không thực hiện được
    if(IsEmpty()==true)
    {
        cout<<"\nStack is Empty, cannot Pop";
    }
    else{
        --top;
    }
}
// lấy giá trị ở đỉnh của stack (TOP)
int Top(int stack[])
{
    return stack[top];

}
// lấy số lượng phần tử stack đang có(size)
int Size()
{
    // vi top lưu trữ chỉ số lớn nhất của stack (ngăn xếp);
    return top+1;
}

int main()
{
int capacity=4;
int stack[capacity];
int top=-1;
Push(stack, capacity, 5);
Push(stack, capacity, 10);
cout<<" Kich thuoc hien tai cua ngan xep la: "<< Size()<<endl;

Push(stack, capacity, 20);
cout<<" Kich thuoc cua ngan xep hien tai la: "<<Size()<<endl;

cout<<" Phan tu dau tien cua ngan xep la: "<<Top(stack)<<endl;
for(int i=0;i<3;i++)
{
    Pop();
}
cout<<"Kich thuoc hien tai cua ngan xep la: "<<Size()<<endl;
    return 0;
}