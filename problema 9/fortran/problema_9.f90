program transposeMatrix
    implicit none
    integer :: matriz(5,5)
    integer :: transpuesta(5,5)
    integer :: i, j

    ! Input elements of the matrix
    print *, "Ingrese los elementos de la matriz (5x5):"
    do i = 1, 5
        do j = 1, 5
            read *, matriz(i, j)
        end do
    end do

    ! Compute the transpose of the matrix
    do i = 1, 5
        do j = 1, 5
            transpuesta(j, i) = matriz(i, j)
        end do
    end do

    ! Display the original matrix
    print *, "Matriz original:"
    do i = 1, 5
        do j = 1, 5
            write(*, '(I3)', advance='no') matriz(i, j)
        end do
        print *, ""
    end do

    ! Display the transposed matrix
    print *, "Matriz transpuesta:"
    do i = 1, 5
        do j = 1, 5
            write(*, '(I3)', advance='no') transpuesta(i, j)
        end do
        print *, ""
    end do

end program transposeMatrix