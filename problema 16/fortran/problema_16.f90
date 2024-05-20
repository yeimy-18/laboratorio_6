program PythagoreanTriples
    implicit none
    integer :: a, b, c
    integer :: c2
    integer, dimension(3) :: sides

    do a = 1, 500
        do b = a, 500
            c2 = a**2 + b**2
            c = sqrt(real(c2))
            if (c**2 == c2 .and. c <= 500) then
                sides(1) = a
                sides(2) = b
                sides(3) = c
                print *, "las ternas son: ", sides(1), sides(2), sides(3)
            end if
        end do
    end do
end program PythagoreanTriples
