program problema_4
    implicit none
    integer :: numeros(50), n_0 = 0, n_1 = 0, n_2 = 0, n_3 = 0, n_4 = 0, n_5 = 0, n_6 = 0, n_7 = 0, n_8 = 0, n_9 = 0
    integer :: i, num

    print *, "Ingrese 50 números entre 0 y 9:"
    i = 1
    do while (i <= 50)
        read(*,*) num
        
        if (num < 0 .or. num > 9) then
            print*, "El número no está en el rango permitido. Por favor, ingrese un número entre 0 y 9."
        else
            numeros(i) = num
            select case (numeros(i))
                case (0)
                    n_0 = n_0 + 1
                case (1)
                    n_1 = n_1 + 1
                case (2)
                    n_2 = n_2 + 1
                case (3)
                    n_3 = n_3 + 1
                case (4)
                    n_4 = n_4 + 1
                case (5)
                    n_5 = n_5 + 1
                case (6)
                    n_6 = n_6 + 1
                case (7)
                    n_7 = n_7 + 1
                case (8)
                    n_8 = n_8 + 1
                case (9)
                    n_9 = n_9 + 1
            end select
            i = i + 1
        endif
    end do

    print *, "Frecuencia de 0: ", n_0
    print *, "Frecuencia de 1: ", n_1
    print *, "Frecuencia de 2: ", n_2
    print *, "Frecuencia de 3: ", n_3
    print *, "Frecuencia de 4: ", n_4
    print *, "Frecuencia de 5: ", n_5
    print *, "Frecuencia de 6: ", n_6
    print *, "Frecuencia de 7: ", n_7
    print *, "Frecuencia de 8: ", n_8
    print *, "Frecuencia de 9: ", n_9
end program problema_4