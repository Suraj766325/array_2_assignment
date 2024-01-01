// 1) Count the number of elements strictly greater than x.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array = ";
    cin>>n;
    int a[n],i,x,count=0;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter number = ";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        count++;
    }
    cout<<"number of element greater than "<<x<<" = "<<count;
}




// 2) WAP to find the largest three elements in the array.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n,i,x;
    cout<<"enter size of array = ";
    cin>>n;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<"largest three element = ";
    for(i=v.size()-3;i<v.size();i++)
    cout<<v[i]<<" ";
}




// 3) Check if the given array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,x,i;
    cout<<"enter size of array  = ";
    cin>>n;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            cout<<"not sorted";
            break;
        }
    }
    if(i==n-1)
    cout<<"sorted";
}




// 4) Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,x,i,esum=0,osum=0,d;
    cout<<"enter size of array  = ";
    cin>>n;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0) esum+=v[i];
        else       osum+=v[i];
    }
    d=esum-osum;
    if(d<0)
    d*=(-1);
    cout<<"difference = "<<d;
}




// 5) Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,i,x;
    cout<<"enter size of vector = ";
    cin>>n;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0) v[i]+=10;
        else       v[i]*=2;
    }
    cout<<"after change array = ";
    for(i=0;i<n;i++)
    cout<<v.at(i)<<" ";
}




// 6) Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,i,j,x;
    cout<<"enter size of vector = ";
    cin>>n;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            continue;
            else if(v[i]==v[j])
            break;
        }
        if(j==n)
        {
            cout<<"unique element = "<<v[i];
            break;
        }
    }
}




// 7) If an array arr contains n elements, then check if the given array is a palindrome or not .
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,i,j,x;
    bool flag =false;
    cout<<"enter size of vector = ";
    cin>>n;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    i=0;j=n-1;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
            flag=true;
        }
        i++;
        j--;
    }
    if(flag==true) cout<<"not pelindrome";
    else           cout<<"pelindrome";
}




// 8) Find the error.
double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance[0], 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}

ANSWER- ERROR IS balance[0] either we can write balance or &balance[0]
