﻿import java.io.*;
import java.util.*;

/**
 * @author Kojihun (CodeUp) 정수 1개 입력받기
 */
public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        float x;
        x = sc.nextFloat();
        
        System.out.print(String.format("%.6f", x));
    }
}


