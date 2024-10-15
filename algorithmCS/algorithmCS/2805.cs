namespace Program
{
    public static class Program
    {
        public static void Main(string[] args)
        {
            var input = Console .ReadLine().Split();
            var treeCnt = int.Parse(input[0]);
            var needMeter = int.Parse(input[1]);

            var trees = new int[treeCnt];

            var inputMeters = Console.ReadLine().Split();

            for (int i = 0; i < treeCnt; i++)
                trees[i] = int.Parse(inputMeters[i]);

            long start = 0;
            long end = trees.Max();

            long result = 0;

            while (start <= end)
            {
                long mid = (start + end) / 2;
                long sum = 0;

                foreach (var t in trees)
                {
                    if (t > mid)
                        sum += t - mid;
                }

                if (sum >= needMeter)
                {
                    result = mid;
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }

            Console.WriteLine(result);
        }
    }
}