public class ListFilterer
{
   public static IEnumerable<int> GetIntegersFromList(List<object> listOfItems)
   {
      List<int> integers = new List<int>();
      foreach(var item in listOfItems)if(item is int)integers.Add((int)item);
      return integers;
   }
}