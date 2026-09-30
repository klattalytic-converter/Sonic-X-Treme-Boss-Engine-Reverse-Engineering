
bool _slDMAStatus(void)

{
  return (Onchip_CHCR0 & 3) == 1;
}

