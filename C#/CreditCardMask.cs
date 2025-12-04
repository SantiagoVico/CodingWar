// https://www.codewars.com/kata/5412509bd436bd33920011bc/train/csharp
// Usually when you buy something, you're asked whether your credit card number,  
// since someone could look over your shoulder, you don't want that shown on your screen.   
// Instead, we mask it. Your task is to write a function maskify, which changes all but the last four characters into '#'.

public static class CreditCardMask
{
    public static string Maskify(string cc)
    {
        if (cc.Length <= 4) return cc;
        return new string('#', cc.Length - 4) + cc.Substring(cc.Length - 4);
    }
}