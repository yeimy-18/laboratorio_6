program compararDiagonales
    implicit none
    integer :: matriz1(12,12), matriz2(12,12)
    integer :: i, j
    logical :: sonIguales
    sonIguales = .true.

    ! Leer las matrices
    print *, "Ingrese los elementos de la primera matriz:"
    do i = 1, 12
        do j = 1, 12
            read *, matriz1(i,j)
        end do
    end do

    print *, "Ingrese los elementos de la segunda matriz:"
    do i = 1, 12
        do j = 1, 12
            read *, matriz2(i,j)
        end do
    end do

    ! Comparar las diagonales principales
    do i = 1, 12
        if (matriz1(i,i) /= matriz2(i,i)) then
            sonIguales = .false.
            exit
        endif
    end do

    if (sonIguales) then
        print *, "Las diagonales principales son iguales."
    else
        print *, "Las diagonales principales no son iguales."
    endif

end program compararDiagonales