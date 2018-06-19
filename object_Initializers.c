//object initializer

public class Person
{
    public int Id;

    public string FirstName;

    public string LastName;

    public DateTime Birthdate;
}

________

public class Person
{
    public Person(int id) {}

    public Person(int id, string firstName) {}

    public Person(int id, string firstName, string lastName) {}

    public Person(int id, DateTime birthdate) {}
}

//messy and out of control

// ---with an object initalizer---

var person = new Person
             {
                 FirstName = "Mosh",
                 LastName = "Hamedani"
             };