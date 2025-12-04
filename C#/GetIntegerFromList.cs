// https://www.codewars.com/kata/514a024011ea4fb54200004b/train/csharp
// In this kata you will create a function that takes a list of non-negative integers and strings and returns a new list with the strings filtered out.
public class ListFilterer
{
   public static IEnumerable<int> GetIntegersFromList(List<object> listOfItems)
   {
      List<int> integers = new List<int>();
      foreach(var item in listOfItems)if(item is int)integers.Add((int)item);
      return integers;
   }
}