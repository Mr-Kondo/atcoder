 IMPLICIT NONE
 INTEGER :: N, A, B, C, D
 READ*, N
 A = N / 1000
 B = (N - A*1000) / 100
 C = (N - A*1000 - B*100) / 10
 D = (N - A*1000 - B*100 - C*10)
 
 IF ( A == B ) THEN
     IF ( A == C ) THEN 
     	PRINT*, "Yes"
     ELSE
        PRINT*, "No"
     END IF
 ELSE IF( B == C ) THEN
     IF( B == D ) THEN
        PRINT*, "Yes"
     ELSE
        PRINT*, "No"
     END IF
 ELSE
     PRINT*, "No"
 END IF
END
