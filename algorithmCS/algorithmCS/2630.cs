namespace Program
{
    public static class Program
    {
        static int white, blue;

        static int[,] arr;

        public static void Main(string[] args)
        {
            var n = int.Parse(Console.ReadLine());

            arr = new int[n, n];

            for (int i = 0; i < n; i++)
            {
                var input = Console.ReadLine().Split();

                for (int j = 0; j < n; j++)
                    arr[i, j] = int.Parse(input[j]);
            }

            Func(0, n, 0, n);

            Console.WriteLine(white);
            Console.WriteLine(blue);
        }

        static void Func(int startX, int endX, int startY, int endY)
        {
            var whiteCnt = 0;
            var blueCnt = 0;

            for (int i = startY; i < endY; i++)
            {
                for (int j = startX; j < endX; j++)
                {
                    if (arr[i, j] == 0) whiteCnt++;
                    if (arr[i, j] == 1) blueCnt++;
                }
            }

            var needCnt = Math.Pow(endX - startX, 2);

            if (whiteCnt == needCnt)
            {
                white++;
                return;
            }
            else if (blueCnt == needCnt)
            {
                blue++;
                return;
            }

            int half = (endX - startX) / 2;

            Func(startX, startX + half, startY, startY + half);
            Func(endX - half, endX, startY, startY + half);
            Func(startX, startX + half, endY - half, endY);
            Func(endX - half, endX, endY - half, endY);
        }
    }
}