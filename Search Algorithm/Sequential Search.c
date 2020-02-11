int seq_search(int key, int low, int high) //탐색 범위는 low에서 high
{
   int i;
   for (i = low; i<=high; i++)
      if (list[i] == key)
         return i; //탐색에 성공하면 키 값의 인덱스 반환
   return -1;     //high까지 탐색한 후, 탐색에 실패하면 -1 반환
}
