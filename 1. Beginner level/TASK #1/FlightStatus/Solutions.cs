using System;
using System.Collection.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DateEx2		
{
	public class Program	
	{ 
		static Dictionary<string, DateTime> flightSchedule = new Dictionary<string, DateTime>(){
														{"ZW346", Convert.ToDateTime("13:54:10")},
														{"AT489", Convert.ToDateTime("16:30:00")},
														{"BR267", Convert.ToDateTime("21:15:30")}};
		
		public class void Main(string[] args)	
		{
		
			string flightNumber;
			string timeLeft;
			
			Console.WriteLine("Enter the Flight Number :");
			flightNumber = Console.ReadLine();
			
			timeLeft = flightStatus(flightNumber);
			Console.WriteLine(timeLeft);
		}
		
		public static string flightStatus(string flightNo)	
		{
			
			if(flightSchedule.ContainsKey(flightNo))
			{
				DateTime departureTime = flightSchedule[flightNo];
				if(DateTime.UtcNow < departureTime)
				{
					TimeSpan ts = departureTime.Subtract(DateTime.UtcNow);
					return "Time to flight " + ts.ToString();
				}
				else
					return "Flight Already Left";
			}
			else
				return "Invalid Flight Number";
		}
	}
}
	
