#include<bits/stdc++.h>
using namespace std;
class Student{ // tao mot lop hoc sinh 
    public:

    int score[5]; // khai bao mang de chua 5 diem cua 1 hoc sinh 
    int sum=0; // khai bao bien tinh tong
    void input() // khai bao ham input
    {
        for(int i=0;i<5;i++)
        {
            cin>>score[i];
            sum+=score[i];
        }
    }
    int calculateTotalScore() // ham tra ve tong diem cua hoc sinh 
    {
        return sum;
    }
};
int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}