using System.ComponentModel.DataAnnotations;

namespace Program
{
    public static class Program
    {
        static int day, width, height, needCnt;
        static Queue<(int r, int c)> queue;
        static int[,] arr;
        public static void Main(string[] args)
        {
            var input = Console.ReadLine().Split();

            width = int.Parse(input[0]);
            height = int.Parse(input[1]);

            arr = new int[height, width];
            queue = new Queue<(int r, int c)>();

            for (int i = 0; i < height; i++)
            {
                var sInput = Console.ReadLine().Split();

                for (int j = 0; j < width; j++)
                {
                    arr[i, j] = int.Parse(sInput[j]);

                    if (arr[i, j] == 1)
                        queue.Enqueue((i, j));
                    else if (arr[i, j] == 0)
                        needCnt++;
                }
            }

            day = -1;
            BFS();

            if (needCnt == 0)
                Console.WriteLine(day);
            else
                Console.WriteLine(-1);
        }

        static int[] dx = { 1, 0, -1, 0 };
        static int[] dy = { 0, -1, 0, 1 };

        static void BFS()
        {
            if (queue.Count <= 0)
                return;

            var currCnt = queue.Count;
            while (currCnt > 0)
            {
                var (r, c) = queue.Dequeue();

                currCnt--;

                for (int i = 0; i < 4; i++)
                {
                    var nx = c + dx[i];
                    var ny = r + dy[i];

                    if (ny >= 0 && ny < height && nx >= 0 && nx < width)
                    {
                        if (arr[ny, nx] == 0)
                        {
                            arr[ny, nx] = 1;
                            needCnt--;
                            queue.Enqueue((ny, nx));
                        }
                    }
                }
            }

            day++;

            BFS();
        }
    }
}