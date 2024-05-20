program matrix_multiplication
    implicit none
    integer :: r1, c1, r2, c2, i, j, k
    integer, allocatable :: mat1(:,:), mat2(:,:), res(:,:)

    print *, 'Enter rows and columns for first matrix:'
    read *, r1, c1
    allocate(mat1(r1, c1))
    print *, 'Enter matrix elements for the first matrix:'
    do i = 1, r1
        do j = 1, c1
            read *, mat1(i, j)
        end do
    end do

    print *, 'Enter rows and columns for second matrix:'
    read *, r2, c2
    if (c1 /= r2) then
        print *, 'Matrices are not conformable.'
        stop
    end if
    allocate(mat2(r2, c2))
    print *, 'Enter matrix elements for the second matrix:'
    do i = 1, r2
        do j = 1, c2
            read *, mat2(i, j)
        end do
    end do

    allocate(res(r1, c2))
    res = 0
    do i = 1, r1
        do j = 1, c2
            do k = 1, c1
                res(i, j) = res(i, j) + mat1(i, k) * mat2(k, j)
            end do
        end do
    end do

    print *, 'Resultant Matrix:'
    do i = 1, r1
        do j = 1, c2
            print *, res(i, j)
        end do
        print *, ' '
    end do

end program matrix_multiplication