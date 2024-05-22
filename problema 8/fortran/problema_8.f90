program sumAndProduct
    implicit none
    integer :: matriz(5,5)
    integer :: i, j
    integer :: sum_pares
    integer(8) :: prod_impares

    sum_pares = 0
    prod_impares = 1

    ! Input elements of the matrix
    print *, "Ingrese los elementos de la matriz (5x5):"
    do i = 1, 5
        do j = 1, 5
            read *, matriz(i, j)
        end do
    end do

    ! Calculate sum of even numbers and product of odd numbers
    do i = 1, 5
        do j = 1, 5
            if (mod(matriz(i, j), 2) == 0) then
                sum_pares = sum_pares + matriz(i, j)
            else
                prod_impares = prod_impares * matriz(i, j)
            endif
        end do
    end do

    ! Display the matrix
    print *, "Matriz ingresada:"
    do i = 1, 5
        do j = 1, 5
            write(*, '(I3)', advance='no') matriz(i, j)
        end do
        print *, ""
    end do

    ! Display results
    print *, "Suma de los numeros pares: ", sum_pares
    print *, "Producto de los numeros impares: ", prod_impares

end program sumAndProduct