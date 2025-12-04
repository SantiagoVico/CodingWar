// https://www.codewars.com/kata/55c45be3b2079eccff00010f/train/csharp

public static class OrderWords
{
  public static string Order(string words)
    {
        if (string.IsNullOrEmpty(words))
            return string.Empty;

        var wordList = words.Split(' ');
        Array.Sort(wordList, (a, b) =>
        {
            int numA = ExtractNumber(a);
            int numB = ExtractNumber(b);
            return numA.CompareTo(numB);
        });

        return string.Join(" ", wordList);
    }
    static int ExtractNumber(string word)
    {
        foreach (char c in word)
            if (char.IsDigit(c))
                return c - '0';
        return 0;
    }
    static void Main()
    {
        string input = "is2 Thi1s T4est 3a";
        string output = Order(input);
        Console.WriteLine(output); // Output: "Thi1s is2 3a T4est"
    }
}