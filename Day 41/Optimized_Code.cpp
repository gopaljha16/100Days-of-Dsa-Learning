// Optimized code of predict the winner 1823. Find the Winner of the Circular Game

// class Solution {
//     public:
    
//       int winner( int n , int k){
//         // base case
//       if(n==1)
//       return 0;
    
//     return (winner(n-1 , k)+k)%n;
//       }
//         int findTheWinner(int n, int k) {
           
//             return winner(n ,k)+1;
//         }
//     };