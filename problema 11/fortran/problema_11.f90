program sum_vector
    implicit none
    integer :: vector(20)
    integer :: indice1, indice2, suma, i

    ! Solicitar los 20 números
    do i = 1, 20
        write(*,*) "Ingrese el elemento ", i, " del vector:"
        read(*,*) vector(i)
    end do

    ! Solicitar los índices
    write(*,*) "Ingrese dos números entre 1 y 20 (índices):"
    read(*,*) indice1, indice2

    ! Validar los índices
    do while (indice1 < 1 .or. indice1 > 20 .or. indice2 < 1 .or. indice2 > 20 .or. indice2 <= indice1)
        write(*,*) "Error: Ingrese dos números válidos (1-20), donde el segundo sea mayor al primero:"
        read(*,*) indice1, indice2
    end do

    ! Calcular la suma
    suma = 0
    do i = indice1, indice2
        suma = suma + vector(i)
    end do

    ! Mostrar el vector original
    write(*,*) "El arreglo original es:"
    do i = 1, 20
        write(*,*) vector(i)
    end do

    ! Mostrar la suma
    write(*,*) "La suma de los elementos entre los índices ", indice1, " y ", indice2, " es: ", suma

end program sum_vector