// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int testcases;
//   cin >> testcases;
// long long tesult = 0;
//   while(testcases--)
//   {
//     long long n , a, b; //these are the number of students ; prices of individual course and the grouop cource of 3 students 
//     cin >> n >> a >> b;

//     // lets follow this strategy (n) -> n is divisible by 3 and n is not divisible by 3 -->> 3a < b or b< 3a and with this we can end this 
//     long long z = n%3; // remaining
//     long long q = n/3;
//     long long result ;
// if(n<3) {if(b< (3*a)){if(b < n*a){result = b;}else { result = z*a;}
//   } else {result = n*a;}
// }
//    else if(z == 0)
//     {
//         if(3*a < b)
//         { result = n*a;}
//         else 
//         { result = q*b;}
//     }
//     else
//     {
//         if((3*a) < b)
//         { result = n*a;}
//         else
//         { result = q*b + z*a; }
//     }
//     cout << result<< endl;
//   }

// }


// we should think of finding all the answers on every strategy not to check every and then do 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
long long check1 ,check2,check3;
    while (testcases--)
    {
        long long n,a,b;
        cin >> n >> a >> b;
long long z = n/3;
long long y = n%3;
    //   if(n%3 == 0)
    //   {
    //     check1 = n*a;
    //      check2 = z*b;

    //   }
    //   else{
    //     check1 = n*a;
    //     check2 = z*b+b;
    //     check3 = z*b + y*a;}

check1 = n*a;
check2 = (n/3)*b + (n%b)*a;
check3 = ((n+2)/3 )*b ; // this is done for ceil 
    
    cout<< min( {check1, check2, check3})<< endl;

    }
}
