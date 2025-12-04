// https://www.codewars.com/kata/5390bac347d09b7da40006f6/train/csharp
// Jaden is also known for some of his philosophy that he delivers via Twitter. When writing on Twitter, he is known for almost always capitalizing every word.
// Your task is to convert strings to how they would be written by Jaden Smith.

using System.Linq;
public static class JadenCase
{
  public static string ToJadenCase(this string phrase)=>string.Join(" ", phrase.Split(' ').Select(word => char.ToUpper(word[0]) + word.Substring(1)));
}