
bool Exact_BaseItem_NestedType___c__CanMergeWith_b__77_0_0x2bf5bb8(undefined8 param_1,long *param_2)

{
  byte bVar1;
  
  if ((bRam0000000006812b29 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fc6b8);
    bRam0000000006812b29 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_063fc6b8 + 0x130);
    if (bVar1 <= *(byte *)(*param_2 + 0x130)) {
      return *(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
             *(long *)PTR_DAT_063fc6b8;
    }
  }
  return false;
}

