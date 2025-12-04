// https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp
// Digital root is the recursive sum of all the digits in a number.
int digital_root(int n)
{
    while (n >= 10)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
}