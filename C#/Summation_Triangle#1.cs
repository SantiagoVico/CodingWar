// https://www.codewars.com/kata/6357825a00fba284e0189798/train/csharp
public class SummationTriangle
{
    public static long GetSum(int n)
    {
        long m = (long)n + 1;
        // closed form: sum_{i=0..n} (i+1)(2i+1) = m(m+1)(4m-1)/6 with m = n+1
        return m * (m + 1) * (4 * m - 1) / 6;
    }
}
