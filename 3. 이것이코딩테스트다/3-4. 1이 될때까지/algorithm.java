import java.util.HashMap;
import java.util.Scanner;

public class algorithm {
    public static void main(String[] args) {

        /**
         * 해결방식
         * N이 K로 나뉘는지 안나뉘는지 일단 판단
         * 안나뉘면 -1하고 카운팅 +1 -->K로 나뉘는지 확인
         * 나뉘면 K로 나뉘고 카운팅 +1 --> K로 또 나뉘는지 확인
         * 최종 횟수 출력
         * */

        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int K = sc.nextInt();
        int cnt = 0;

        while(true) {

            if( N % K == 0){
                N = N / K;
                cnt++;
            }else{
                N = N -1;
                cnt++;

            }

            if(N == 1) {
                break;
            }
        }

        System.out.println(cnt);


//        Scanner sc = new Scanner(System.in);
//
//        int N = sc.nextInt();
//        int K = sc.nextInt();
//        int cnt = 0;
//
//        while(true) {
//
//            if (N % K == 0) {
//                N = N / K;
//                cnt++;
//            } else {
//                N = N - 1;
//                cnt++;
//            }
//
//            // 마지막에 1이 될때까지 빼기
//            if (N == 1) {
//                break;
//            }
//        }
//        System.out.print(cnt);
      }

}
