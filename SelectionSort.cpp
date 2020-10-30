#include<bits/stdc++.h>

using namespace std;

#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define pb push_back
#define input(a,n) for(ll i=0;i<n;i++){ll y;cin>>y;a.pb(y);}
#define print(x) for(auto it:x)cout<<it<<" ";cout<<"\n";
#define all(x) (x).begin(),(x).end()
#define clr(x) memset(x,0,sizeof(x))
#define fn(i,a,n) for(ll i = a; i < n; ++i)
#define f(i,n) for(ll i = 0; i < n; i++)
#define endl '\n'
#define test ll t;cin>>t;while(t--)
#define INF 1000000000
#define pyes cout<<"YES"<<endl;
#define pno cout<<"NO"<<endl;
#define sz(x) (x).size()

const ll mod=1000000007;

void swapping(int &a, int &b) {         
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
                  swap(array[i], array[imin]);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}


