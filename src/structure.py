from pybind11_demo import structure


def main() -> None:
    pet = structure.Pet("hoge")
    pet_public = structure.PetPublic("hoge")
    pet_private = structure.PetPrivate("hoge")

    print(pet)
    try:
        print(f"Pet.name: {pet.name}")
    except AttributeError as e:
        print(f"Pet.name <- AttributeError ({e})")
    pet.setName("fuga")
    print(f"Pet.getName: {pet.getName()}")
    try:
        pet.name = "hoge"
        print("Pet.name = 'hoge'")
    except AttributeError as e:
        print(f"Pet.name = 'hoge' <- AttributeError ({e})")
    print(f"Pet.getName: {pet.getName()}")

    print()
    print(pet_public)
    print(f"PetPublic.name: {pet_public.name}")
    pet_public.setName("fuga")
    print(f"PetPublic.getName: {pet_public.getName()}")
    pet_public.name = "hoge"
    print("PetPublic.name = 'hoge'")
    print(f"PetPublic.getName: {pet_public.getName()}")

    print()
    print(pet_private, "<- failed to build if you access [name] in __repr__")
    print(f"PetPrivate.name: {pet_private.name} (readonly property)")
    pet_private.setName("fuga")
    print(f"PetPrivate.getName: {pet_private.getName()}")
    try:
        pet_private.name = "hoge"
        print("PetPrivate.name = 'hoge'")
    except AttributeError as e:
        print(f"PetPrivate.name = 'hoge' <- AttributeError ({e})")
    print(f"PetPrivate.getName: {pet_private.getName()}")


if __name__ == "__main__":
    main()
