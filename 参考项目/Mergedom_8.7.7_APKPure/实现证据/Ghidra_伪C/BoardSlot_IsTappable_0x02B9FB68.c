
bool Recovered_BoardSlot_IsTappable_0x02B9FB68(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if ((*(char *)(param_1 + 0x2d) == '\0') &&
     (uVar2 = Recovered_BoardSlot_get_IsEmpty_0x2b9e508(), (uVar2 & 1) == 0)) {
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    bVar1 = *(char *)(*(long *)(param_1 + 0x30) + 0x40) == '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

