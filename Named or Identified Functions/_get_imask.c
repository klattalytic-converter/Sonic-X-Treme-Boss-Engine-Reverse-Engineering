
uint _get_imask(uint param_1)

{
  uint in_sr;
  
  return in_sr & (int)DAT_0600e66e | (param_1 & 0xf) << 4;
}

