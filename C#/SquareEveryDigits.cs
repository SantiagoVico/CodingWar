// https://www.codewars.com/kata/546e2562b03326a88e000020/train/csharp
using System;

public class SquareEveryDigits
{
    public static int SquareDigits(int n)
    {
      string result = "";
      foreach(char c in n.ToString())
      {
        int digit = int.Parse(c.ToString());
        int squared = digit * digit;
        result += squared.ToString();
      }
      return int.Parse(result);
    }
}