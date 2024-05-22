program contarParesImpares
    implicit none
    integer :: matriz(5,5) = reshape((/1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25/), shape(matriz))
    integer :: contadorPares = 0, contadorImpares = 0
    integer :: i, j

    do i = 1, 5
        do j = 1, 5
            if (mod(matriz(i, j), 2) == 0) then
                contadorPares = contadorPares + 1
            else
                contadorImpares = contadorImpares + 1
            endif
        enddo
    enddo

    print *, "Cantidad de números pares: ", contadorPares
    print *, "Cantidad de números impares: ", contadorImpares
end program contarParesImpares