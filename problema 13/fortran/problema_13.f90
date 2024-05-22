program contarCeros
    implicit none
    integer :: arreglo(5,5)
    integer :: i, j, contador
    real :: numAleatorio

    contador = 0
    call random_seed

    ! Llenar el arreglo y contar los ceros
    do i = 1, 5
        do j = 1, 5
            call random_number(numAleatorio)
            arreglo(i,j) = int(numAleatorio * 10)
            if (arreglo(i,j) == 0) then
                contador = contador + 1
            endif
        end do
    end do

    ! Mostrar el arreglo (opcional)
    do i = 1, 5
        do j = 1, 5
            write(*, '(I2)', advance="no") arreglo(i,j)
        end do
        write(*, *)
    end do

    ! Mostrar el número de ceros
    write(*, *) 'Número de ceros en el arreglo: ', contador

end program contarCeros