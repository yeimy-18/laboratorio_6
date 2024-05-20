program matrix_sum_avg
    implicit none
    integer :: m, n, i, j
    real, allocatable :: A(:,:), row_results(:,:), col_results(:,:)

    ! Pedir al usuario las dimensiones de la matriz
    print *, 'Ingrese el número de filas de la matriz:'
    read *, m
    print *, 'Ingrese el número de columnas de la matriz:'
    read *, n

    ! Asignar memoria para las matrices
    allocate(A(m,n))
    allocate(row_results(m, 2))
    allocate(col_results(n, 2))

    ! Leer los elementos de la matriz
    print *, 'Ingrese los elementos de la matriz:'
    do i = 1, m
        do j = 1, n
            read *, A(i, j)
        end do
    end do

    ! Calcular suma y promedio para cada fila
    do i = 1, m
        row_results(i, 1) = sum(A(i, :))
        row_results(i, 2) = row_results(i, 1) / n
    end do

    ! Calcular suma y promedio para cada columna
    do j = 1, n
        col_results(j, 1) = sum(A(:, j))
        col_results(j, 2) = col_results(j, 1) / m
    end do

    ! Imprimir resultados por filas
    print *, 'Suma y promedio por filas:'
    do i = 1, m
        print '(F6.0, F10.6)', row_results(i, 1), row_results(i, 2)
    end do

    ! Imprimir resultados por columnas
    print *, 'Suma y promedio por columnas:'
    do j = 1, n
        print '(F6.0, F10.6)', col_results(j, 1), col_results(j, 2)
    end do

    ! Liberar memoria asignada
    deallocate(A)
    deallocate(row_results)
    deallocate(col_results)
end program matrix_sum_avg
