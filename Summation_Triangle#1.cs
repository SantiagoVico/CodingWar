// https://www.codewars.com/kata/6357825a00fba284e0189798/train/csharp

using System;

public class SummationTriangle
{
    public static long GetSum(int n)
    {
        long m = (long)n + 1;
        return m * (m + 1) * (4 * m - 1) / 6;
    }   

    static void Main(string[] args)
    {
        Console.WriteLine(GetSum(2)); // 22
        Console.WriteLine(GetSum(3)); // 50
    }
}
