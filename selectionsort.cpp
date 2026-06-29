#include <iostream>
using namespace std  ; 
int main (){
  // selection sort code  
 int n ; 
 cout  << " tell me the size of an array " ; 
 cin >> n  ; 
 int arr[100] ;  
 for ( int i = 0  ; i < n ; i ++ ) { 
    cin >> arr[i] ; 
 }

  for ( int i = 0 ; i < n-1 ; i++  )  { 
     int minindex = i ; 
     for ( int j = i + 1  ; j < n ; j ++ ) { 
        if ( arr[minindex] > arr[j]) {
            minindex = j ; 
        }
     }
     swap( arr[minindex] , arr[i]) ; 
  }
  
  for ( int i = 0 ; i < n ; i ++) { 
    cout << "  " << arr[i] ;  
  }  


}