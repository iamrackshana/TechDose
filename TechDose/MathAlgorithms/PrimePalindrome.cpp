// Optimized function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // Numbers <= 1 are not prime
    if (n == 2) return true;  // 2 is prime
    if (n % 2 == 0) return false; // Even numbers > 2 are not prime
    
    // Check only odd factors up to the square root of n
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false; // Found a factor, n is not prime
        }
    }
    
    return true; // No factors found, n is prime
}

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    std::string num_str = std::to_string(n);
    int left = 0, right = num_str.size() - 1;
    
    while (left < right) {
        if (num_str[left] != num_str[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // It is a palindrome
}

class Solution {
public:
    int primePalindrome(int n) {
        // Handle the edge case for 1 explicitly
        if (n == 1) return 2;
        
        while (true) {
            // Skip even-length palindromes to the next higher power of 10
            if ((n > 1e3 && n < 1e4) || (n > 1e5 && n < 1e6) || (n > 1e7 && n < 1e8)) {
                n = pow(10, ceil(log10(n))); // Jump to the next power of 10
                continue;
            }
            
            // Check if the current number is both prime and a palindrome
            if (isPrime(n) && isPalindrome(n)) {
                return n; // Return the first prime palindrome found
            }
            
            n++; // Increment and check the next number
        }
    }
};
