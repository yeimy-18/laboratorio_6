module matrixOps
    implicit none
    contains

    subroutine printMatrix(matrix)
        real, intent(in) :: matrix(:,:)
        integer :: i, j
        do i = 1, size(matrix, 1)
            do j = 1, size(matrix, 2)
                write(*, '(F6.1)', advance='no') matrix(i, j)
            end do
            write(*,*)  ! Ensure new line after each row
        end do
    end subroutine printMatrix

    subroutine reverseRows(matrix)
        real, intent(inout) :: matrix(:,:)
        integer :: i, j, m, n
        real :: temp
        m = size(matrix, 1)
        n = size(matrix, 2)

        do i = 1, m / 2
            do j = 1, n
                temp = matrix(i, j)
                matrix(i, j) = matrix(m - i + 1, j)
                matrix(m - i + 1, j) = temp
            end do
        end do
    end subroutine reverseRows

    subroutine modifyRows(matrix)
        real, intent(inout) :: matrix(:,:)
        integer :: i, j, m, n
        real, allocatable :: tempRow(:)
        m = size(matrix, 1)
        n = size(matrix, 2)

        allocate(tempRow(n))

        do i = 1, m
            tempRow = matrix(i, :) * m + (i - 1) * matrix(m, :)
            matrix(i, :) = tempRow
        end do

        deallocate(tempRow)
    end subroutine modifyRows

end module matrixOps

program matrix_operations
    use matrixOps
    implicit none
    integer :: m, n, i, j
    real, allocatable :: matrix(:,:)

    ! Read matrix dimensions
    print *, "Enter the number of rows (m):"
    read *, m
    print *, "Enter the number of columns (n):"
    read *, n

    ! Allocate the matrix
    allocate(matrix(m, n))

    ! Read matrix elements
    do i = 1, m
        print *, "Enter elements of row ", i
        do j = 1, n
            read *, matrix(i, j)
        end do
    end do

    ! Print original matrix
    print *, "Original Matrix:"
    call printMatrix(matrix)

    ! Reverse rows
    call reverseRows(matrix)
    print *, "Matrix after reversing rows:"
    call printMatrix(matrix)

    ! Modify rows
    call modifyRows(matrix)
    print *, "Matrix after modifying rows:"
    call printMatrix(matrix)

    ! Deallocate the matrix
    deallocate(matrix)
end program matrix_operations