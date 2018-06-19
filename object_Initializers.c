//object initializer

public class Person
{
    public int Id;

    public string FirstName;

    public string LastName;

    public DateTime Birthdate;
}

public class Person
{
    public Person(int id) {}

    public Person(int id, string firstName) {}

    public Person(int id, string firstName, string lastName) {}

    public Person(int id, DateTime birthdate) {}
}