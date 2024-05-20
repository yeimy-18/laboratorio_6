program CrossProduct
    implicit none
    integer :: u(3), v(3), cross_product(3)

    ! Input vectors u and v
    print *, 'Enter the components of vector u (u1, u2, u3):'
    read *, u(1), u(2), u(3)

    print *, 'Enter the components of vector v (v1, v2, v3):'
    read *, v(1), v(2), v(3)

    ! Calculate the cross product
    cross_product(1) = u(2) * v(3) - v(2) * u(3)
    cross_product(2) = -(u(1) * v(3) - v(1) * u(3))
    cross_product(3) = u(1) * v(2) - v(1) * u(2)

    ! Output the result
    print *, 'Cross product of u and v is:', cross_product
end program CrossProduct