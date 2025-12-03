// https://www.codewars.com/kata/5390bac347d09b7da40006f6/train/csharp
using System.Linq;
public static class JadenCase
{
  public static string ToJadenCase(this string phrase)=>string.Join(" ", phrase.Split(' ').Select(word => char.ToUpper(word[0]) + word.Substring(1)));
}