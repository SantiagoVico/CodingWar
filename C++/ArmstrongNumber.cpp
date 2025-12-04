// https://www.codewars.com/kata/5287e858c6b5a9678200083c/train/cpp
// An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
// For example: 153 is an Armstrong number since 1^3 + 5^3 + 3^3 = 153.

bool narcissistic( int value ){
    int originalValue = value;
    int sum = 0;
    int digits = 0;
    
    // Count the number of digits
    for(int temp = value; temp > 0; temp /= 10) {
        digits++;
    }
    
    // Calculate the sum of each digit raised to the power of 'digits'
    for(int temp = value; temp > 0; temp /= 10) {
        int digit = temp % 10;
        int power = 1;
        for(int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
    }
    
    return sum == originalValue;
}