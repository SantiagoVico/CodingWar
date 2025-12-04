// https://www.codewars.com/kata/56606694ec01347ce800001b/train/csharp
// Implement a function that accepts three integer values a, b, c. 
//The function should return true if a triangle can be built with the sides of given length and false in any other case.

public class Triangle
{
    public static bool IsTriangle(int a, int b, int c)
    {
        return a + b > c && a + c > b && b + c > a;
    }
}
