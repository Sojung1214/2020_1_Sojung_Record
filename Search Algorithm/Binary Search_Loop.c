int search_binary2(int key, int low, int high) //탐색범위 low~high
{
   int middle;
   while (low <=high) { // 아직 숫자들이 남아 있다면
      middle = (low + high)/2;
      if (key == list[middle]) //탐색 성공
         return middle;
      else if (key<lise[middle])
         high = middle - 1; //왼쪽 부분리스트 탐색
      else 
         low = middle + 1; //오른쪽 부분리스트 탐색
   }
   return -1; //탐색 실패(발견되지 않음)
}
