public class Customer  //public class example
{
    public void Promote()
    {

    }
}

__

public class Customer
{
    protected int CalculateRating()
    {

    }
}
...

var customer = new customer();
customer.calculateRating();

____

internal class RateCalculator
{

}

//In the same assembly
var calc = new RateCalculator();

//In another assembly
var calc = bnew RateCalculator();

___

public class Customer
{

protected internal void weirdo()
{

}
}