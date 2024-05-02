IMPLICIT NONE
INTEGER :: n, record_n, m = 0

READ*, n

record_n = n

DO
    m = m + MOD(n,10)
    n = n / 10
    if( n == 0 ) then
        exit
    end if
END DO

IF (mod(record_n,m) == 0) THEN
    PRINT*, "Yes"
ELSE
    PRINT*, "No"
END IF

END
