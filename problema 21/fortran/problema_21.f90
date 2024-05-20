program cross_product
    implicit none
    integer :: u(3), v(3), result(3)

    ! Inicializar los vectores
    u = [1, 2, 3]
    v = [4, 5, 6]

    ! Llamar a la subrutina para calcular el producto cruzado
    call crossProduct(u, v, result)

    ! Imprimir el resultado
    print *, "Cross Product: ", result
end program cross_product

subroutine crossProduct(u, v, result)
    integer, intent(in) :: u(3), v(3)
    integer, intent(out) :: result(3)

    ! Calcular el producto cruzado
    result(1) = u(2) * v(3) - u(3) * v(2)
    result(2) = u(3) * v(1) - u(1) * v(3)
    result(3) = u(1) * v(2) - u(2) * v(1)
end subroutine crossProduct

! Función External (incluida por si se necesita)
function External(i, j, k) result(res)
    integer, intent(in) :: i, j, k
    real :: res

    if ((i == 1 .and. j == 2 .and. k == 3) .or. &
        (i == 2 .and. j == 3 .and. k == 1) .or. &
        (i == 3 .and. j == 1 .and. k == 2)) then
        res = 1
    else if ((i == 3 .and. j == 2 .and. k == 1) .or. &
             (i == 1 .and. j == 3 .and. k == 2) .or. &
             (i == 2 .and. j == 1 .and. k == 3)) then
        res = -1
    else
        res = 0
    end if
end function External

