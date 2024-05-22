program reverse_vector
    implicit none
    integer :: vector(10)
    integer :: i, temp

    ! Lectura de los elementos del vector
    print *, 'Ingrese 10 elementos para el vector:'
    do i = 1, 10
        read *, vector(i)
    end do

    ! Intercambio de elementos
    do i = 1, 5
        temp = vector(i)
        vector(i) = vector(11 - i)
        vector(11 - i) = temp
    end do

    ! Impresión del vector modificado
    print *, 'Vector modificado:'
    do i = 1, 10
        print *, vector(i)
    end do
end program reverse_vector