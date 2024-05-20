program reverse_text
    implicit none
    character(len=80) :: texto
    integer :: i, longitud
    integer :: contador_vocales(5) = (/0, 0, 0, 0, 0/) ! a, e, i, o, u

    print *, "Ingrese una linea de texto (maximo 80 caracteres): "
    read(*, '(A)') texto
    longitud = len_trim(texto)

    ! Imprimir el texto al revés
    print *, "Texto al reves: "
    do i = longitud, 1, -1
        write(*, '(A)', advance='no') texto(i:i)
        select case (texto(i:i))
        case ('a', 'A')
            contador_vocales(1) = contador_vocales(1) + 1
        case ('e', 'E')
            contador_vocales(2) = contador_vocales(2) + 1
        case ('i', 'I')
            contador_vocales(3) = contador_vocales(3) + 1
        case ('o', 'O')
            contador_vocales(4) = contador_vocales(4) + 1
        case ('u', 'U')
            contador_vocales(5) = contador_vocales(5) + 1
        end select
    end do
    print *, ""

    ! Reportar el número de cada una de las vocales
    print *, "Conteo de vocales:"
    print *, "a: ", contador_vocales(1)
    print *, "e: ", contador_vocales(2)
    print *, "i: ", contador_vocales(3)
    print *, "o: ", contador_vocales(4)
    print *, "u: ", contador_vocales(5)

end program reverse_text