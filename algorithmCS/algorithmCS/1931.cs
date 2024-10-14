using System;
using System.Linq;

class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());

        (int s, int e)[] meetings = new (int s, int e)[n];

        for (int i = 0; i < meetings.Length; i++)
        {
            var input = Console.ReadLine().Split();
            meetings[i].s = int.Parse(input[0]);
            meetings[i].e = int.Parse(input[1]);
        }

        meetings = meetings.OrderBy(m => m.e).ThenBy(m => m.s).ToArray();

        var lastEndTime = 0;
        var meetingCnt = 0;
        foreach (var meet in meetings)
        {
            if (meet.s >= lastEndTime)
            {
                meetingCnt++;
                lastEndTime = meet.e;
            }
        }

        Console.WriteLine(meetingCnt);
    }
}