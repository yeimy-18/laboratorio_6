program sort_array
    implicit none
    integer, allocatable :: arr(:)
    integer :: n, i, j, temp

    print *, 'Ingrese el tamaño del arreglo (entre 20 y 50):'
    read *, n

    if (n < 20 .or. n > 50) then
        print *, 'Error: el arreglo debe ser de entre 20 y 50 elementos.'
        stop
    endif

    allocate(arr(n))

    print *, 'Ingrese ', n, ' elementos:'
    do i = 1, n
        print *, 'Elemento ', i, ':'
        read *, arr(i)
    end do

    ! Ordenar de menor a mayor
    do i = 1, n - 1
        do j = 1, n - i
            if (arr(j) > arr(j + 1)) then
                temp = arr(j)
                arr(j) = arr(j + 1)
                arr(j + 1) = temp
            endif
        end do
    end do

    print *, 'Arreglo ordenado de menor a mayor:'
    print *, arr

    ! Ordenar de mayor a menor
    do i = 1, n - 1
        do j = 1, n - i
            if (arr(j) < arr(j + 1)) then
                temp = arr(j)
                arr(j) = arr(j + 1)
                arr(j + 1) = temp
            endif
        end do
    end do

    print *, 'Arreglo ordenado de mayor a menor:'
    print *, arr

    deallocate(arr)
end program sort_array