from pybind11_demo import integer


def main() -> None:
    print(f"add_i16(1, 2) = {integer.add_i16(1, 2)}")
    print(f"add_i32(1, 2) = {integer.add_i32(1, 2)}")
    print(f"add_i64(1, 2) = {integer.add_i64(1, 2)}")

    print()
    print(f"add_i16(2^14, 2^14) = {integer.add_i16(2**14, 2**14)} <- overflow")
    print(f"add_i32(2^14, 2^14) = {integer.add_i32(2**14, 2**14)}")
    print(f"add_i64(2^14, 2^14) = {integer.add_i64(2**14, 2**14)}")

    print()
    try:
        print(f"add_i16(2^30, 2^30) = {integer.add_i16(2**30, 2**30)}")
    except TypeError as e:
        msg = e.__str__().replace("\n", " ")
        print(f"add_i16(2^30, 2^30) <- TypeError ({msg})")
    print(f"add_i32(2^30, 2^30) = {integer.add_i32(2**30, 2**30)} <- overflow")
    print(f"add_i64(2^30, 2^30) = {integer.add_i64(2**30, 2**30)}")


if __name__ == "__main__":
    main()
