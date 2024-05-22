program findEvenNumbers
    implicit none
    integer :: matriz(5,5)
    integer :: i, j

    ! Input elements of the matrix
    print *, "Ingrese los elementos de la matriz (5x5):"
    do i = 1, 5
        do j = 1, 5
            read *, matriz(i, j)
        end do
    end do

    ! Display the matrix and find even numbers
    print *, "Matriz ingresada:"
    do i = 1, 5
        do j = 1, 5
            write(*, '(I3)', advance='no') matriz(i, j)
            if (mod(matriz(i, j), 2) == 0) then
                print *, " (Par en posicion [", i, "][", j, "])"
            endif
        end do
        print *, ""
    end do

end program findEvenNumbers