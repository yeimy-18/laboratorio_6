program suma_promedio
    implicit none
    integer :: numero(10), i, suma = 0
    real :: promedio = 0.0

    do  i = 1, 10
        print *, "Ingrese un numero: "
        read *, numero(i)
        suma = suma + numero(i)
        
    end do
    print *, "Suma de los numeros ingresados: ", suma
    
    promedio = suma / 10.0
    
    print *, "Promedio de los numeros ingresados: ", promedio
    
end program suma_promedio

