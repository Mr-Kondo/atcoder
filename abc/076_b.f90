IMPLICIT NONE
INTEGER :: I, J, N, K
I = 1
READ*, N
READ*, K
DO J = 1, N
 IF( I > K ) THEN
     I = I + K
 ELSE
     I = I * 2
 END IF
END DO
PRINT*, I
END
