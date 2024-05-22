program findMinMax
    implicit none
    integer :: matriz(5,5)
    integer :: i, j
    integer :: n_menor, n_mayor

    ! Initialize variables
    n_menor = huge(n_menor)
    n_mayor = -huge(n_mayor)

    ! Input elements of the matrix
    print *, "Ingrese los elementos de la matriz:"
    do i = 1, 5
        do j = 1, 5
            read *, matriz(i, j)
        end do
    end do

    ! Find the minimum and maximum elements
    do i = 1, 5
        do j = 1, 5
            if (matriz(i, j) < n_menor) then
                n_menor = matriz(i, j)
            endif
            if (matriz(i, j) > n_mayor) then
                n_mayor = matriz(i, j)
            endif
        end do
    end do

    ! Output the results
    print *, "El numero menor de la matriz es: ", n_menor
    print *, "El numero mayor de la matriz es: ", n_mayor

end program findMinMax