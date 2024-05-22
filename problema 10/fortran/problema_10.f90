program ordenarAlumnos
    implicit none
    integer :: N, i, j
    character(len=50), allocatable :: nombres(:)
    real, allocatable :: promedios(:)
    real :: tempPromedio
    character(len=50) :: tempNombre

    print *, 'Ingrese el número de alumnos:'
    read *, N

    allocate(nombres(N))
    allocate(promedios(N))

    do i = 1, N
        print *, 'Ingrese el nombre del alumno ', i, ':'
        read *, nombres(i)
        print *, 'Ingrese el promedio de ', nombres(i), ':'
        read *, promedios(i)
    end do

    ! Ordenar por promedio
    do i = 1, N-1
        do j = 1, N-i
            if (promedios(j) < promedios(j+1)) then
                tempPromedio = promedios(j)
                promedios(j) = promedios(j+1)
                promedios(j+1) = tempPromedio

                tempNombre = nombres(j)
                nombres(j) = nombres(j+1)
                nombres(j+1) = tempNombre
            end if
        end do
    end do

    print *, 'Alumnos ordenados por promedio:'
    do i = 1, N
        print *, nombres(i), ':', promedios(i)
    end do
end program ordenarAlumnos