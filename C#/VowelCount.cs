// https://www.codewars.com/kata/54ff3102c1bad923760001f3/train/csharp
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