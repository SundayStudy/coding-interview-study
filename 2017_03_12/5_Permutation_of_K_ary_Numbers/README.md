# Permutation of K-ary Numbers

## 문제

0부터 k-1의 숫자로 만들 수 있는 길이 n의 모든 수열을 생성하세요.

## 풀이

A[0~n-1] 배열에서 현재 K-ary 문자열을 유지한다고 가정하면 k-string(n, k) 함수를 호출합니다.

```
void k-string(int n, int k) {
  //길이 n 의 k-ary 문자열 처리
  if (n < 1)
    printf("%s", A); // 배열 A는 전역 변수이다.
    else {
      for (int j = 0; j < k ; j++) {
        A[n-1] = j;
        k-string(n-1, k);
      }
    }
}
```

## 출처

[코딩 인터뷰 퀘스천](http://www.kyobobook.co.kr/product/detailViewKor.laf?barcode=9788931447842)
3장 문제 3번
