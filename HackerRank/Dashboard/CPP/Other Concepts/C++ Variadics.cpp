
template <bool bit>
int reversed_binary_value(void)
{
    return bit;
}
template <bool bit1, bool bit2, bool... bits>
int reversed_binary_value(void)
{
    return (reversed_binary_value<bit2, bits...>() << 1) + bit1;
}