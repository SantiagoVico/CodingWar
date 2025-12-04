// https://www.codewars.com/kata/6357825a00fba284e0189798/train/csharp
// Given a number n, return the sum of the first n+1 numbers in the series defined by the formula: T(i) = (i + 1) * (2i + 1) for i = 0 to n.
// For example, if n = 3, the series values are T(0) =  1, T(1) = 6, T(2) = 15, T(3) = 28, and the sum would be 1 + 6 + 15 + 28 = 50.
public class SummationTriangle
{
    public static long GetSum(int n)
    {
        long m = (long)n + 1;
        // closed form: sum_{i=0..n} (i+1)(2i+1) = m(m+1)(4m-1)/6 with m = n+1
        return m * (m + 1) * (4 * m - 1) / 6;
    }
}
