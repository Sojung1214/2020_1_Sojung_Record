//개선된 순차 탐색
int seq_search2(int key, int low, int high) //탐색 범위는 low에서 high
{
   int i;

   list[high+1] = key;
   for (i = low; list[i] != key; i++); //키 값을 찾는 순간 종료
   if (i == (high+1)) return -1; //탐색 실패
   else return i;                //탐색 성공
}
