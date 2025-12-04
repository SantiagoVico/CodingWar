// https://www.codewars.com/kata/54ff3102c1bad923760001f3/train/csharp
// Return the number (count) of vowels in the given string.
// We will consider a, e, i, o, u as vowels for this Kata (but not y).
public static class VowelCount
{
    public static int GetVowelCount(string str)
    {
        int count = 0;
        foreach (char c in str.ToLower())
        {
            if ("aeiou".Contains(c))
            {
                count++;
            }
        }
        return count;
    }
}