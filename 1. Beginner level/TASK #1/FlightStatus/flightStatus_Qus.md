Flight Status

AirFlight business which is into aviation has a requirement to show the flight status when the user enquirers based on the flight number as input.

Write a program that receives flight number as input from the user.

Various flight number and their departure time is given as a dictionary .

Write a method flightStatus' which receives the flight number and calculates the time left for departure (keep the method static). That is, from the current time, the time available for departure. For example, if the flight 'Ar456' is
leaving at 18.00 and the current time is 10.00 the the time available is 08.00.

This method MUST return a message => Time To Flight 08:00:17.0918529

If the current time is greater than the departure time then display Flight Already Left' message.

Method to implement:
public static string flightStatus(string flightNo)

Sample Input 1:
Enter the Flight Number: ZW346
Sample Output 1:
E
Time To Flight 02:47:17.0918529
