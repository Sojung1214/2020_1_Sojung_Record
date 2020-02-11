int search_binary(int key, int low, int high) //탐색범위 low~high
{
   int middle;
   if (low <= high) {
      middle = (low + high)/2;
      if (key == list[middle]) //탐색 성공
         return middle;
      else if (key<lise[middle])
         return search_binary(key, low, middle - 1); //왼쪽 부분리스트 탐색
      else 
         return search_binary(key, middle + 1, high); //오른쪽 부분리스트 탐색
   }
   return -1; //탐색 실패
}
