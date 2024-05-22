program matriz
    implicit none
    integer:: i, j, numero, encontrado = 0
    integer:: a(4, 5)
    
    print *, "Ingrese los elementos de la matriz de 4x5:"
    do i = 1, 4
        do j = 1, 5
            print *, "Elemento [", i, "][", j, "]: "
            read *, a(i, j)
        end do
    end do

    print *, "Ingrese el numero a buscar:"
    do  i= 1, 4
        do j = 1, 5
            print '(I4)', a(i, j)
        end do
        print *
    end do

    print *, "Ingrese un numero a buscar en la matriz: "
    read *, numero

    do i = 1, 4
        do j = 1, 5
            if ( a(i, j) == numero ) then
                encontrado = 1
                exit
            end if
        end do
        if (encontrado == 1) then
            exit
        end if
    end do
    
    if (encontrado == 1) then
        print *, "El numero se encuentra en la matriz "
    else
        print *, "El numero no se encuentra en la matriz."
    end if

end program matriz


