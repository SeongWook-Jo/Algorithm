using System.Text;

namespace Program
{
    public static class Program
    {
        public static void Main(string[] args)
        {
            var input = Console.ReadLine().Split();

            var numCnt = int.Parse(input[0]);
            var sumCnt = int.Parse(input[1]);

            var nums = new int[numCnt + 1];

            var numInput = Console.ReadLine().Split();

            for (int i = 1; i < numCnt + 1; i++)
                nums[i] = int.Parse(numInput[i - 1]);

            var sums = new int[numCnt + 1];

            for (int i = 1; i < numCnt + 1; i++)
                sums[i] = nums[i] + sums[i - 1];

            var sb = new StringBuilder();

            for (int i = 0; i < sumCnt; i++)
            {
                var numPos = Console.ReadLine().Split();

                var start = int.Parse(numPos[0]);
                var end = int.Parse(numPos[1]);

                var result = sums[end] - sums[start-1];

                sb.AppendLine(result.ToString());
            }
            Console.WriteLine(sb.ToString());
        }
    }
}