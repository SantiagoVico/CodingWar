// https://www.codewars.com/kata/546e2562b03326a88e000020/train/csharp
// Welcome. In this kata, you are asked to square every digit of a number and concatenate them.
// For example, if we run 9119 through the function, 811181 will come out, because 9^2 is 81 and 1^2 is 1.
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