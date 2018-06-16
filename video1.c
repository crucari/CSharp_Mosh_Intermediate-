//work from Mosh's C Sharp Intermediate course to go here//

public class Person
{
    public string Name;  //field, starting with an access modifyer (public) and data tyoe(string) + identifier (Name)

    public void Introduct()  //method, return type void)doesn't return
    {
        Console.WriteLine("Hi, my name is " + Name); //displaying name of person on console
    }
}